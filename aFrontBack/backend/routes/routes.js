const express=require("express");
const {signin,signup,logout,updatePassword,deleteAccount}=require('../controllers/user.js');
const authMiddleware = require('../middlewares/auth');


const router=express.Router();

router.get('/',(req,res)=>{
    res.send("Hello User")
})

router.post('/login',signin);
router.post('/signup',signup);
router.post('/logout',logout);


router.post('/dashboard', authMiddleware, (req, res) => {
  res.status(200).json({ 
    message: 'Authorized', 
    userId: req.user.userid,name: req.user.name // send the username
  });
});
router.get('/dashboard', authMiddleware, (req, res) => {
  res.status(200).json({
    success: true,
    message: "User is currently logged in",
    user: req.user
  });
});

router.put('/dashboard/updatepassword',authMiddleware,updatePassword);
router.delete('/dashboard/deleteAccount',authMiddleware,deleteAccount);

module.exports=router;