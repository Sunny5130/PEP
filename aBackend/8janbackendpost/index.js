const express=require("express");
const mongoose=require("mongoose");
const app=express();
const parser=require("cookie-parser");
require("dotenv").config();
const userroute=require("./routes/user.js");
const postroute=require("./routes/post.js");

app.use(express.json());
app.use(express.urlencoded({extended:true}));
app.use(parser());

app.use("/user",userroute);
app.use("/post",postroute);

const Port=process.env.Port ||3001
app.listen(Port,()=>{
    console.log(`Server is running on port: ${Port}`);
    mongoose.connect(process.env.Mongo_url)
    .then(console.log("Mongodb connected successfully"))
    .catch(err=>{console.log("Error: ",err)});
});


