import { useState,useEffect } from "react";

function Index(){
    const [count,setcount]=useState(0);
    function cc(){
        setcount(count+1);
    }
    function saini(){
        console.log("call");
    }
    useEffect(()=>{
        saini();
    },[count])
    return(<>
        <h1>I am index component</h1>
        <h1>{count}</h1>
        <button id='btn' onClick={()=>{cc()}}>count++</button>
        {/* <button id='btn' onClick={()=>setcount(count+1)}>count++</button>  without calling the cc function */}
        <button onClick={()=>setcount(0)}>reset</button>
        <button onClick={()=>setcount(count-1)}>count--</button>

    </>)
}
export default Index;