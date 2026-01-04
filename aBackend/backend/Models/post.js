const mongoose=require("mongoose");
const postSchema=new mongoose.Schema({
    user:{
        type:mongoose.Schema.Types.ObjectId,
        ref:'user',
        required:true
    },
    title:{
        type:String,
        required:true,
        trim:true
    },
    content:{
        type:String,
        required:true
    }
},
{timestamps:true}
)
module.exports=mongoose.model("post",postSchema);