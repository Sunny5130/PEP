function Child2(props){
    return(<>
    <br />
    <h1>I am child component</h1>
    <h1>{props.name}</h1>
    <h1>{props.age}</h1>
    </>)

}
export default Child2;