const post=require("../Models/post");

//-----------------------Upload post---------------------------//
const postUpload=async function(req,res){
    try{
        console.log("req.user:", req.user);
        const{title,content}=req.body;
        if(!title || !content){return res.status(400).json({message:"All field are requireed"})};

        await post.create({
            user:req.user.userid,
            title,
            content
        });
        return res.status(201).json({message:"Post create successfull"});
    }catch(err){
        console.log("error: ",err);
        return res.status(500).json({message:"Not able to upload post"});
    }
}
//---------------------------update post content or title--------------------//
const update=async function(req,res){
    try{
        const postid=req.params.id;
        const {title,content}=req.body;
        if(!title && !content){return res.status(400).json({message:"Nothing to update"})};

        const pos=await post.findById(postid);

        if(!pos){return res.status(401).json({message:"No post found"})};
        if(pos.user.toString() !==req.user.userid){
            return res.status(402).json({message:"You don't have access to update post"});
        }
        if(title) pos.title=title;
        if(content)pos.content=content;
        await pos.save();
        return res.status(200).json({sucess:true,message:"Post update successfully",post:pos});

    }catch(err){
        console.log("Error to update post: ",err);
        return res.status(500).json({message:"Unable to update post"});
    }
}

//---------------------------------delete post----------------------//
const deletepost=async function(req,res){
    try{
        const postid=req.params.id;
        const pos=await post.findById(postid);
        if(!pos){
            return res.status(404).json({message:"Post is not there for this post id"});
        }
       if(pos.user.toString()!==req.user.userid){
        return res.status(401).json({message:"You don't have access to delete this post"});
       }
       await post.findByIdAndDelete(pos._id);
    // await pos.deleteOne();
       return res.status(200).json({
        sucess:true,
        message:"Post deleted successfully"
       }); 
    }catch(err){
        console.log("Error to delete the post",err);
        return res.status(500).json({
            sucess:false,
            message:"Unable to delete the post"
        });
    }
}

//--------------------------getall post------------------------------//
const getAllpost=async function(req,res){
    try{
        const posts= await post.find()
        .populate("user","name email")
        .sort({createdAt:-1})
        return res.status(200).json({
            message:true,
            posts
        });
    }catch(err){
        console.log("Erorr to getting all posts: ",err);
        return res.status(500).json({
            sucess:false,
            message:"Unable to get all posts"
        });
    }
}
const getMine=async function(req,res){
    try{
        const posts=await post.find({user:req.user.userid})
        .populate()
        .sort({createdAt:-1})
        return res.status(200).json(posts);     
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({sucess:false,
            message:"Unable to provide your posts"
        });
    }
}
module.exports={postUpload,update,deletepost,getAllpost,getMine};