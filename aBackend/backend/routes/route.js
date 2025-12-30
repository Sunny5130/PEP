const express=require('express');
const {signin,signup,deleteAccount,updatePassword,logout}=require('../controllers/controler.js');

const router=express.Router();

router.get('/',(req,res)=>{
    res.send("Hello ji at api call page");
})

router.post('/login',signin);
router.post('/signup',signup);
router.put('/update',updatePassword);
router.delete('/delete',deleteAccount);
router.post('/logout',logout);

module.exports=router;