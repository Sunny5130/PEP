const express=require("express");
const{signup,login,updatePass,deleteUser,logout}=require("../Controllers/user");
const {auth}=require("../Middleware/auth.js");
const router=express.Router();

router.get("/",(req,res)=>{                     
    res.send("This is User page");
});
router.get("/:id",(req,res)=>{                          //extract data from url
    res.send(`User with id: ${req.params.id}`);
});

router.post('/signup',signup);
router.post('/login',login);
router.patch('/updatePass',auth,updatePass);
router.delete('/delete',auth,deleteUser);
router.post('/logout',auth,logout);

module.exports=router;