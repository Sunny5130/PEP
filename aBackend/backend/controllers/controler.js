const User=require('../Models/user.js');
const bcrypt=require('bcrypt');
const jwt=require('jsonwebtoken');
const user = require('../Models/user.js');
//---------------------signup----------------//
const signup=async(req,res)=>{
    try{
        const{name,email,password}=req.body;
        if(!name ||!email ||!password){
           return res.status(400).json({message:"All fiels are requirred"});
        }
        const exituser=await User.findOne({email});
        if(exituser){
            return res.status(409).json({sucess:false,message:"User already registered"});
        }
        const hasspassword=await bcrypt.hash(password,10);

        await User.create({
            name,email,password:hasspassword
        });
       return res.status(201).json({sucess:true,message:"User register Successfully"});
    }catch(err){
        console.log("Error: ",err);
       return res.status(402).json({sucess:false,message:"user not registered",err})
    }
};


//---------------------------signin--------------------------------//
const signin=async(req,res)=>{
try{
    const{email,password}=req.body;
    if(!email || !password){
        return res.status(400).json({message:"All fields are required"})
    };
    const exitemail=await User.findOne({email});
    if(!exitemail){
        return res.status(401).json({sucess:false,message:"User is not registered with this email"});
    }
    const ispass=await bcrypt.compare(password,exitemail.password);
    if(!ispass){
        return res.status(401).json({message:"Password is not correct"});
    }
    
    const token=jwt.sign(
        {userid:User._id},
        process.env.Secret_key,
        {expiresIn:'1h'}
    )
    res.cookie("token",token,{
        httponly:true,
        secure:process.env.NODE_ENV==="Production",
        samesite:'strict',
        MaxAge:60*60*1000
    });
    return res.status(201).json({token,message:"User Login Successfully"});

}catch(err){
    console.log("Login error",err);
    return res.status(500).json({sucess:false,message:"User not able to login"});
}
}
//-------------------------------------Password update--------------------------------------//
const updatePassword=async(req,res)=>{
    try{
        const{email,password}=req.body;
        if(!email || !password){
            return res.status(400).json({message:"All fields are requireed"})
        };
        const exituser=await User.findOne({email});

        if(!exituser){
            return res.status(401).json({sucess:false,message:"User is not registered with this email"})
        };
        const hasspassword=await bcrypt.hash(password,10);
        await User.findOneAndUpdate(exituser._id,{
            password:hasspassword}
        );
        return res.status(201).json({sucess:true,message:"Password update sucessfull"});
    }catch(err){
        console.log("error",err);
        return res.status(500).json({sucess:false,message:"There is error in updating password"})
    }
}
//-------------------------------------Delete account----------------------------------------//
const deleteAccount=async(req,res)=>{
    try{
        const{email,password}=req.body;
        if(!email || !password){
            return res.status(400).json({message:"All fields are requireed"})
        };
        const exituser=await User.findOne({email});
        if(!exituser){
            return res.status(401).json({sucess:false,message:"User is not registered with this email"})
        };
        const ispass=await bcrypt.compare(password,exituser.password);
        if(!ispass){
            return res.status(400).json({sucess:false,message:"Password is incorrect"});
        }
        await User.findByIdAndDelete(exituser._id);
      
        return res.status(201).json({sucess:true,message:"User account deleted from database"});
    }catch(err){
        console.log("error",err);
        return res.status(500).json({sucess:false,message:"There is error to deleting account"})
    }
}

//----------------------------Logout router---------------------------------//
const logout=async(req,res)=>{
    try{
        res.clearCookie("token",{
            httponly:true,
            secure:process.env.NODE_ENV==="Production",
            samesite:'strict',
        })
        return res.status(200).json({sucess:true,message:"User logout successfully"});

    }catch(err){
        res.status(500).json({sucess:false,message:"User not able to logout"})
    }
}
module.exports={signin,signup,deleteAccount,updatePassword,logout};