const express=require("express");
const {authMiddleware}=require("../middlewares/auth.js")
const router=express.Router();
const {postUpload,update,deletepost,getAllpost,getMine}=require("../controllers/post.js");

router.get('/',authMiddleware,(req,res)=>{
    res.send("Welcome to post page");
})

router.get('/allpost',getAllpost);
router.get('/mine',authMiddleware,getMine);
router.post('/upload',authMiddleware,postUpload);
router.put('/update/:id',authMiddleware,update);
router.delete('/delete/:id',authMiddleware,deletepost);


module.exports=router;
