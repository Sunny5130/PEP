//   using map function inside in component
function Index2(){
    let arr=[1,2,"Sunny","saini","2s"];
    return(<>
    <h1>I am Index2 components</h1>
        {arr.map((num,ind)=>{
            return <h1 key={ind}>{num}</h1>
        })}
    </>)
}
export default Index2;