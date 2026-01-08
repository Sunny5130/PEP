const post = require("../models/post");
//-------------------------upload post-----------------------------------------------//
const uploadpost=async function(req,res){
    try{
        const{title,content}=req.body;
        const useri=req.user.userid;
        if(!title ||!content){
            return res.status(401).json({
                message:"title and content of the profile is requirred"
            });
        }
        const imageurl=req.file;
        if(!imageurl){
            return res.status(402).json({
                message:"Please upload image or pic of the post"
            });
        }
        const newpost=await post.create({
            user:useri,
            title,
            content,
            image:imageurl.path
        });
        return res.status(201).json({
            message:"Post created successfully",
            post:newpost
        });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            sucess:false,
            message:"I am not able to upload"
        });
    }
};
//-------------------------------------Get all posts---------------------------------//
const allposts=async function(req,res){
    try{
        const posts=await post.find({});
        return res.status(200).json({
            sucess:true,
            post:posts
        });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            sucess:false,
            message:"I am not provide all posts"
        });
    }
};

//-------------------------------------Get loggedin user posts---------------------------------//
const mineposts=async function(req,res){
    try{
        const posts=await post.find({user:req.user.userid});
        return res.status(200).json({
            sucess:true,
            posts
        });        
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            sucess:false,
            message:"I am not able to provide mine post"
        });
    }
};
//-------------------------Update title and content---------------------//
const updatetc=async function(req,res){
    try{
        const{title,content}=req.body;
        const posid=req.params.id;
        const thipost=await post.findById(posid);
        if(!title ||!content){
            return res.status(401).json({
                message:"If you want to update then fill content and title "
            });
        }
        if(thipost.user.toString()!==req.user.userid){
            return res.status(401).json({
                message:"You dont have access to update this post"
            });
        }
        if(title)thipost.title=title;
        if(content)thipost.content=content;
        thipost.save();
        return res.status(200).json({
            sucess:true,
            message:"title and content of the post updated successfully"
        });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            sucess:false,
            message:"I am not able to update title and content of the post"
        });
    }
};
//----------------------------------Delete post--------------------------------------//
const deletepost=async function(req,res){
    try{
        const posid=req.params.id;
        const thispost=await post.findById(posid);

        if(thispost.user.toString()!==req.user.userid){
            return res.status(401).json({
                message:"You don't have access to delete this post"
            });
        }
        // await thispost.deleteOne();
        await post.findByIdAndDelete(posid);
        return res.status(200).json({
            message:"Post deleted successfully"
        });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            sucess:false,
            message:"I am not able to deletepost"
        });
    }
};

//-------------------------------Add comments on post------------------------------//
const addcomments=async function(req,res){
    try{
        const postid=req.params.id;
        const postt=await post.findById(postid);
        const{text}=req.body;
        if(!text){
            return res.status(401).json({message:"if you want to comment then write something"});
        }
        postt.comments.push({
            user: req.user.userid,
            text
        });
        await postt.save();

        return res.status(200).json({
            message:"comment on this post",
            postt
        });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            sucess:false,
            message:"I am not able to add comments on post"
        });
    }
};

//------------------------------------like or unlikepost---------------------------//
const like=async function(req,res){
    try{
        const postid=req.params.id;
        const Post=await post.findById(postid);
        if(!Post){
            return res.status(404).json({message:"Post not found"})
        }
        const postlikes=Post.likes.includes(req.user.userid);
        if(postlikes){
            Post.likes.pull(req.user.userid);
        }else{
            Post.likes.push(req.user.userid);
        }
        await Post.save();
        return res.status(200).json({
            sucess:true,
            totallikes:Post.likes.length
        });
    }catch(err){
        console.log("Error: ",err);
        return res.status(500).json({
            sucess:false,
            message:"I am not able to like or unlike on post"
        });
    }
};


module.exports={uploadpost,mineposts,updatetc,allposts,deletepost,addcomments,like}
