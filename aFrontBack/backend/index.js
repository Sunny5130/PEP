const express=require("express");
const userroute=require('./routes/routes.js');
const { default: mongoose } = require("mongoose");
const cors=require('cors');
require("dotenv").config();

const app=express();

app.use(express.json());
app.use(express.urlencoded({ extended: true }));

app.get('/',(req,res)=>{
    res.send("Server is running");
});

app.use(cors({
  origin: "http://localhost:5173", // <-- frontend URL
  credentials: true,               // <-- allow cookies / auth headers
}));
app.use('/api',userroute);

mongoose.connect(process.env.MONGO_URI)
.then(()=>{console.log("Database connected Successfully")})
.catch((err)=>{ console.log("database connection failed",err)});

const port=process.env.PORT || 3002;
app.listen(port,()=>{
    console.log(`server running at ${port}`);
});
