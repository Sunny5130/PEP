const jwt=require("jsonwebtoken");
const auth=async function(req,res,next){
    try{
        const token=req.cookies.token;
        console.log("token: ",token);
        if(!token){
            return res.status(400).json({message:"No token provided"});
        }
        const decoded=jwt.verify(token,process.env.Secret_key);
        if(!decoded){
            return res.status(401).json({message:"Invalid token"});
        }
        req.user=decoded;
        console.log("this information going after token verify: ",decoded);
        next();
    }catch(err){
        console.log("error: ",err);
        return res.status(500).json({
            sucess:false,
            message:"unauthorized access"
        });
    }
}
module.exports={auth};