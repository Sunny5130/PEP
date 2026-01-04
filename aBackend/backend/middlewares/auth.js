const jwt=require("jsonwebtoken");
const authMiddleware=async function(req,res,next){
    try{
        const token=req.cookies.token;
        if(!token){
            return res.status(401).json({message:"No token provided"});
        }
        const decoded=await jwt.verify(token,process.env.Secret_key);
        console.log("Decoded:", decoded);
        console.log("Token: ",token);
        if (!decoded) {
      return res.status(400).json({ message: "Invalid token" });
    }
        req.user=decoded;
        // console.log(req.user);
        next();
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({message:"Authentication failed"});
    }
}
module.exports={authMiddleware};