const express=require('express');
const mongoose  = require('mongoose');
const app=express();
const router=require('./routes/route.js');
require("dotenv").config();


app.use(express.json());
app.use(express.urlencoded());

app.get('/',(req,res)=>{
    res.send("Welcome ji at front page");
})
app.use('/api',router);

const Port=process.env.Port || 3001;
app.listen(Port,()=>{
    console.log(`Server running at ${Port}`);
})
mongoose.connect(process.env.Mongo_url)
.then(()=>console.log("Mongodb connected Successfully"))
.catch((err)=>{console.log("Mongodb not connected",err)});