const express=require('express');
const mongoose  = require('mongoose');
const Parser=require("cookie-parser");
const app=express();
const user=require('./routes/route.js');
const post=require('./routes/post.js');
require("dotenv").config();


app.use(express.json());
app.use(express.urlencoded({ extended: true }));
app.use(Parser());

app.get('/',(req,res)=>{
    res.send("Welcome ji at front page");
})
app.use('/user',user);
app.use('/post',post);

const Port=process.env.Port || 3001;
app.listen(Port,()=>{
    console.log(`Server running at ${Port}`);
})
mongoose.connect(process.env.Mongo_url)
.then(()=>console.log("Mongodb connected Successfully"))
.catch((err)=>{console.log("Mongodb not connected",err)});