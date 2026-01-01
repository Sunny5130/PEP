import Child from "./Child";
function Parent(){
    return(<>
    <h1>I am Parent</h1>
    <Child name="Sunny" age={25} />
    </>)
}
export default Parent;