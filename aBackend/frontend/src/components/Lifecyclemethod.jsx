import { useState,useEffect } from "react";
function Lifec(){
    const [count,setcount]=useState(0);
    useEffect(()=>{
        console.log("Mount Component or component create successfully")
        return ()=>{
            console.log("Unmount component or componenet remove from ui");
    };
    },[])
    useEffect(()=>{
        console.log("State update");
    },[count]);
    return( <>
          <h1>I am Life cycle method component</h1>
         <h1>{count}</h1>
         <button onClick={()=>{setcount(count+1)}}>count</button>
        </>)
}
export default Lifec;