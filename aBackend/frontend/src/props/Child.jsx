import Child2 from "./Chid2";
function Child(props){
    return(<>
    <br />
    <h1>I am child</h1>
    <h1>{props.name}</h1>
    <h1>{props.age}</h1>
    <Child2 name={props.name} age={props.age}/>
    </>)
}
export default Child;