const jwt=require("jsonwebtoken");
const auth=async function(req,res,next){
    try{
        const token=req.cookies.token;
        console.log(token);
        if(!token){return res.status(500).json({message:"No token provided"});}
        const decoded=jwt.verify(token,process.env.Secret_key);
        req.user=decoded;
        next();
        
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({message:"Unauthorized invalid token"});
    }
}
module.exports={auth};
