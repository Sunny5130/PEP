const express=require("express");
const {auth}=require("../middlewares/auth");
const upload=require("../middlewares/upload");
const router=express.Router();
const {uploadpost,updatetc,deletepost,addcomments,allposts,mineposts,like}=require("../controllers/post");

router.get("/",(req,res)=>{
    res.send("This is post page");
});

router.get("/getall",allposts);
router.get("/mine",auth,mineposts);

router.post("/upload",auth,upload.single("image"),uploadpost);
router.put("/update/:id",auth,updatetc);
router.put("/addcomment/:id",auth,addcomments);
router.put("/like/:id",auth,like);
router.delete("/delete/:id",auth,deletepost);


module.exports=router;
