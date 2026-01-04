const express=require('express');
const {signin,signup,deleteAccount,updatePassword,logout}=require('../controllers/controler.js');
const {authMiddleware}=require("../middlewares/auth.js");

const router=express.Router();

router.get('/',(req,res)=>{
    res.send("Hello ji at api call page");
})

router.post('/login',signin);
router.post('/signup',signup);
router.put('/update',authMiddleware,updatePassword);
router.delete('/delete',authMiddleware,deleteAccount);
router.post('/logout',authMiddleware,logout);

module.exports=router;