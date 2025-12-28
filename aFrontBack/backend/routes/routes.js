const express=require("express");
const {signin,signup,logout}=require('../controllers/user.js');
const authMiddleware = require('../middlewares/auth');


const router=express.Router();

router.get('/',(req,res)=>{
    res.send("Hello User")
})

router.post('/login',signin);
router.post('/signup',signup);
router.post('/logout',logout);


router.post('/auth/check', authMiddleware, (req, res) => {
  // Send both userId and name
  res.status(200).json({ 
    message: 'Authorized', 
    userId: req.user.userid,
    name: req.user.name // send the username
  });
});




module.exports=router;