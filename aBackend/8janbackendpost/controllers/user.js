const user=require("../models/user");
const bcrypt=require("bcrypt");
const jwt=require("jsonwebtoken");
//---------------------------signup--------------------------//
const signup=async function(req,res){
    try{
        const{name,email,password}=req.body;
        if(!name ||!email ||!password){
            return res.status(400).json({message:"All fields are requirred"});
        }
        if(password.length<6){
            return res.status(401).json({
                message:"Password must be greater then 5 lgit length"
            });
        }
        const exitemail=await user.findOne({email});
        if(exitemail){
            return res.status(409).json({
                message:"this email is already registered"
            });
        }
        const hasspass=await bcrypt.hash(password,10);
        await user.create({
            name,email,password:hasspass
        });
        return res.status(201).json({
            sucess:true,
            message:"User registered successfully"
        });

    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            message:"Unable to create user account"
        });
    }
};

//---------------------------login-------------------------//
const login=async function(req,res){
    try{
        const{email,password}=req.body;
        if(!email || !password){
            return res.status(400).json({message:"All fields are requirred"})
        }
        const exitemail=await user.findOne({email});
        if(!exitemail){
            return res.status(401).json({message:"This email is not registered"})
        }
        const decryptpass=await bcrypt.compare(password,exitemail.password);
        if(!decryptpass){
            return res.status(407).json({message:"Password is incorrect"});
        }
        const token=jwt.sign(
            {userid:exitemail._id,name:exitemail.name},
            process.env.Secret_key,
            {"expiresIn":"1h"}
        )
        res.cookie("token",token,{
            httpOnly:true,
            secure:process.env.Node_env,
        });
        return res.status(200).json({
            sucess:true,
            message:"User login successfully",
            email:email,
            token:token
        });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            message:"Unable to login user"
        });
    }
};

//---------------------------logout--------------------------//
const logout=async function(req,res){
    try{
        res.clearCookie("token",{
            httpOnly:true,
            secure:process.env.Node_env
        });
        console.log("This user is going to logout",req.user);
        return res.status(200).json({message:"User logout successfully"});
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            message:"Unable to logout"
        });
    }
};

//-----------------------------Update password----------------//
const updatepassword=async function(req,res){
    try{
        const {password}=req.body;
        if(!password){return res.status(400).json({message:"if you want to update the password first fill the password"})};
        if(password.length<6){return res.status(400).json({message:"password must be greater then 5 digit"})};
        const hashpass=await bcrypt.hash(password,10);
        await user.findByIdAndUpdate(req.user.userid,{password:hashpass});
        console.log("password updated successfully");
        return res.status(200).json({message:"Password updated successfully"});
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            message:"Unable to update password"
        });
    }
};
//------------------------------Delete user-------------------//
const deleteuser=async function(req,res){
    try{
        console.log("userid: ",req.user.userid);
        await user.findByIdAndDelete(req.user.userid);
        return logout(req,res);
        // return res.status(200).json({
        //     message:"User deleted successfully"
        // });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            message:"Unable to delete user"
        });
    }
};

//------------------------get user details whoi is currently loggedin-----------------------//
const getmine=async function(req,res){
    try{
    const mineinf = await user.findById(req.user.userid);
        console.log("Userid: ",req.user.userid);
    return res.status(200).json({
        success: true,
        message: "User details here",
        mineinf
    });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            message:"Unable to access my account"
        });
    }
};

//--------------------------all users details-------------------------------------------------//
const getall=async function(req,res){
    try{
        const allaccount=await user.find({}).
        populate();
        return res.status(200).json({
            message:"all accounts are these:",
            allaccount:allaccount
        });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            message:"Unable to access all user account"
        });
    }
};

//----------------------------------upload profile picture--------------------------------------//
const uploadProfileimg=async function(req,res){
    try{
        const useri=req.params.id;
        if(!req.file){
            return res.status(400).json({
                message:"No file uploaded"
            });
        }
        const imageurl=req.file.path;
        await user.findByIdAndUpdate(useri,{
            profilepic:imageurl
        })
        return res.status(200).json({
            sucess:true,
            message:"Profile pic uploaded successfully",
            profilepic:imageurl,
            user:req.user
        });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            sucess:false,
            message:"Unable to upload profile pic"
        });
    }
};
module.exports={signup,login,logout,updatepassword,deleteuser,getall,getmine,uploadProfileimg};