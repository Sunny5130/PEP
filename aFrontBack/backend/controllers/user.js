const user=require('../models/model.js');
const bcrypt=require('bcrypt');
const jwt=require('jsonwebtoken');

//--------------------------sign up or account creation controller--------------------//
const signup= async(req,res)=>{
    try{
        const {name,email,password}=req.body;
        if(!name || !email || !password){
            return res.status(400).json({message:"All fields are Mandatory"});
        }
        const exituser=await user.findOne({email});
        if(exituser){
            return res.status(400).json({message:"User is already Registered with this email"});
        }
        const hashpass=await bcrypt.hash(password,10);

        await user.create({
            name,email,password:hashpass
        });
        return res.status(201).json({message:"User registered Successfully"});
    }catch(err){
        res.status(500).json({message:"Internal Server error"});
    }
};

//--------------------------Sign in or login controller-------------------------------//
const signin=async(req,res)=>{
    try{
        const {email,password}=req.body;
        if(!email || !password){
           return res.status(400).json({message:"All fiels are required"});
        }
        const exitu=await user.findOne({email});
        if(!exitu){return res.status(401).json({message:"Invalid email"})};

        const ispass=await bcrypt.compare(password,exitu.password);
        if(!ispass){ return res.status(401).status({message:"invalid password"})};

        const token=jwt.sign(
            {userid:user._id,name: exitu.name},
            process.env.Jwt_secret,
            {expiresIn:'1h'}
        );
        res.cookie("token",token,{
            httpOnly:true,
            secure:process.env.NODE_ENV==="production",
            sameSite:"strict",
            maxAge:60*60*60
        })
        return res.status(200).json({message:"User login Successfully",token});

    }catch(err){
        console.log("Login error",err);
        return res.status(500).json({message:"Internal server error"});
    }
};




//-------------------Logout router------------------//
// const logout = (req, res) => {
//     return res.status(200).json({
//         success: true,
//         message: "Logout successful. Please remove token from client."
//     });
// };
    const logout = (req, res) => {
    try {
        res.clearCookie("token", {
            httpOnly: true,
            secure: process.env.NODE_ENV === "production",
            sameSite: "strict",
        });
        return res.status(200).json({
            success: true,
            message: "Logout successful"
        });
    } catch (error) {
        return res.status(500).json({
            success: false,
            message: "Logout failed"
        });
    }
};



module.exports={signin,signup,logout};