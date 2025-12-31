const express=require('express');
const app=express();

app.get('/user/:id',(req,res)=>{
    const id=req.params.id;
    res.send(`Id of user is: ${id}`);
})
app.get("/order/:orderId/item/:itemId", (req, res) => {
  const { orderId, itemId } = req.params;
  res.send(`Order: ${orderId}, Item: ${itemId}`);
});

app.listen(3000,()=>{
    console.log("Server is running at port 3000");
});
