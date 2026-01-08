const mongoose=require("mongoose");

const postSchema=new mongoose.Schema({
    user:{
        type:mongoose.Schema.Types.ObjectId,
        ref:"user",
        required:true
    },
    title:{
        type:String,
        required:true
    },
    content:{
        type:String,
        required:true
    },
    image:{
        type:String,
        required:true
    },
    comments:[
        {
        user:{ 
            type:mongoose.Schema.Types.ObjectId,
            ref:"user"
        },text:{
            type:String,
            required:true
        },
        createdAt:{
            type:Date,
            default:Date.now
        }
    }
    ],
    likes:[
        {
            type:mongoose.Schema.Types.ObjectId,
            ref:"user"
        }
    ]
},{timestamps:true});

module.exports=mongoose.model("post",postSchema);