const user=require('../Models/user');
const bcrypt=require("bcrypt");
const jwt=require("jsonwebtoken");

const signup=async function(req,res){
    try{
        const{name,email,password}=req.body;
        if(!name ||!email ||!password){
            return res.status(401).json({message:"All fiels are required"});
        }
        const exituser=await user.findOne({email});
        if(exituser){
            return res.status(402).json({message:"User is already registered with this email"});
        }
        const hashPass=await bcrypt.hash(password,10);
        await user.create({
            name,email,password:hashPass}
        );
        return res.status(201).json({sucess:true,message:"User registered successfully",mail:email});
    }catch(err){
        console.log("Error",err);
        return res.status(500).json({sucess:false,message:"User not registered"});
    }
}
const login=async function(req,res){
    try{
        const{email,password}=req.body;
        if(!email || !password){return res.status(401).json({message:"All fiels are required"})};

        const exituser=await user.findOne({email});
        if(!exituser){return res.status(409).json({message:"This email is not registered"})};

        const hashedpass=await bcrypt.compare(password,exituser.password);
        if(!hashedpass){return res.status(401).json({message:"Password is incorrect"})};
        const token=jwt.sign(
            {userid:exituser._id,name:exituser.name},
            process.env.Secret_key,
            {"expiresIn":'1h'}
        )
        res.cookie("token",token,{
            secure:process.env.Node_env==="Production",
            httpOnly:true,
            sameSite:"strict",
            maxAge:60*60*1000
        });
        return res.status(201).json({sucess:true,message:"user is logged in",email:email});
    }catch(err){
        console.log("Error",err);
        return res.status(500).json({sucess:false,
            message:"User not able to logged in"
    })
    }
}
const deleteUser=async function(req,res){
    try{
    const{email,password}=req.body;
        if(!email || !password){return res.status(401).json({message:"All fiels are required"})};
        const exituser=await user.findOne({email});
        if(!exituser){return res.status(409).json({message:"This email is not registered"})};
        const hashedpass=await bcrypt.compare(password,exituser.password);
        if(!hashedpass){return res.status(401).json({message:"Password is incorrect"})}; 

        await user.findOneAndDelete({email});
        return res.status(201).json({sucess:true,
            message:"User delete from database successfully"
        })   
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({sucess:false,
            message:"Unable to delete user"
        });
    }
}
const updatePass=async function(req,res){
    try{
    const{email,password}=req.body;
        if(!email || !password){return res.status(401).json({message:"All fiels are required"})};
        const exituser=await user.findOne({email});
        if(!exituser){return res.status(409).json({message:"This email is not registered"})};

        const hashPass=await bcrypt.hash(password,10);
        await user.findOneAndUpdate({email},{password:hashPass}); //findOneAndUpdate(filter, update, options?)

        return res.status(201).json({sucess:true,
            message:"Passwordupdate successfully"
        })   
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({sucess:false,
            message:"Unable to update password"
        });
    }
}
const logout=async function(req,res){
    try{
        res.clearCookie("token",{
            httpOnly:true,
            secure:process.env.Node_env==="Production",
            sameSite:"strict"
    });
    return res.status(200).json({message:"User is successfully logout"});
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({sucess:false,
            message:"User not able to logout"
        });
    }
}
module.exports={signup,login,updatePass,deleteUser,logout};
