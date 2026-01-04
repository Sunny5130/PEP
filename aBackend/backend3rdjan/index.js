const express=require('express');
const mongoose=require("mongoose");
const user=require('./Routes/router');
const app=express();

require("dotenv").config();
app.use(express.json());
app.use(express.urlencoded());

const cookieParser = require("cookie-parser");
app.use(cookieParser());   // ✅ IMPORTANT

app.get('/',(req,res)=>{
    res.send("Welcome Ji");
});


app.use('/user',user);
const PORT=process.env.PORT ||3001;

app.listen(PORT,()=>{
console.log(`Server is running at port: ${PORT}`);
mongoose.connect(process.env.Mongo_url)
.then(console.log("Database connect successfully"))
.catch((err)=>{console.log("Database no connected",err)});
});