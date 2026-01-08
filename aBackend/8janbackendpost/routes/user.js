const express=require("express");
const {signup,login,logout,updatepassword,deleteuser,getall,getmine,uploadProfileimg}=require("../controllers/user");
const {auth}=require("../middlewares/auth");
const upload=require("../middlewares/upload");
const router=express.Router();

router.get("/",(req,res)=>{
    res.send("yei user page hai");
});

router.get('/getall',getall);
router.get('/getmine',auth,getmine);
router.post('/upload/:id',auth,upload.single("image"),uploadProfileimg);

router.post("/signup",signup);
router.post('/login',login);
router.patch('/update',auth,updatepassword);
router.delete("/delete",auth,deleteuser);
router.post('/logout',auth,logout);

module.exports=router; 