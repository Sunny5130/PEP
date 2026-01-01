const express=require('express');
const app=express();


//----------------------------------------extract the data using params--------------------------------------------------//
// app.get('/',(req,res)=>{
//   res.send("Welcome ji");
// })
// app.get('/user/:id',(req,res)=>{
//   res.send(`User id is: ${req.params.id}`);
// })

//----------------------------------------change the req data uing middlewars-------------------------------------------//
app.use((req,res,next)=>{
  req.id=12;
  next();
})
app.use((req,res,next)=>{
  req.id=13;
  next();
})
app.use((req,res,next)=>{
  res.send(`I am third middleware ${req.id}`);
})

app.listen(3000,()=>{
  console.log(`Server running at port: 3000`);
})