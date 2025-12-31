// let saini=(x)=>x*x; // no need of write return statement in arrow function
// console.log(saini(2));

// let saini=function(x){
//     return x*x;
// }
// console.log(saini(2));



// function saini(num){
//     let x=3;
//     console.log("saini: ", num);
//     function saini2(){                                       /// this is clousers in js
//         console.log("saini2: ",num,'  ',x)
//     }
//     saini2();
// }
// saini(2);




// let obj={
//     name:"Sunny",
//     age:20,
//     cgp:8.01
// };                                          //copy the object using spread operator
// console.log(obj);
// let obj2={...obj};
// obj2.age=23;
// console.log(obj2);


// console.log(x)
// console.log(y)
// var x=2;                                         // it is hoistintinct
// let y=3;


// let x=2;
// let y="2";
// console.log(x==y);                           // some operations on x and y variable
// console.log(x===y);
// console.log(x+y);
// console.log(x-y);
// console.log(x*y);




// function saini(){
//     {
//         const x=2;
//         x=3
//         console.log(x);
//     }

// }
// saini();

// var arr = [1, 2];
// arr.push(3);  //         allowed
// arr = [4, 5]; //         errr

// let arr=[];
// arr.push(2);



////////////////////----------------------simple function vs arrow function---------------------//

// saini(2);
// function saini(num){
//     console.log(num);
// }
// saini(3);
//--------------------------------------------------------- hoisting 
// saini2(3);
// let saini2=(num)=>{
//     console.log(num);
// }
// saini2(2);

/// --------------------------------------------return statement not need in arrow function
// let saini=(x)=> x*x;
// console.log(saini(3));


///---------------------------------------------can be use as constructors-----------------------//

// function Saini(name,age) {
//     this.name = name;
//     this.age=age;
// }
// const p = new Saini("Sai",2);
// console.log(p.name,p.age);




//--------------------------------simple function has its own arguments---------------------------//
// function saini(){
//     console.log(arguments);
// }
// saini(1,2,3,4,5,6);
//-----------------------------------arrow functions don't has its own arguments----------------------//
// let x=()=>{
//     console.log(arguments);
// }
// x(1,2,3,4,5,6);


//----------------give current date--------------------
// const d=new Date();
// console.log(d);



//----------------------------error handling------------------------------------//
// try{
//     // let x;                                                       
//     console.log(x);
//     let x;

// }catch(err){
//     // console.log(err);
//     throw new Error("Errroe isa jnkshs");
// }finally{
//     console.log("Execution over");

// }



//------------------------------------------map function perform in arrow function--------------------//
// let arr=[1,2,3,"ssd",null,"2","2s"];
// let ans=arr.map((num)=>{
//     return num*num;
// });
// console.log(ans);



//------------------------------------------------Callback Hell-----------------------------------------//


// function getData(id,nextfun){
//     setTimeout(()=>{
//         console.log("Id: ",id);
//         if(nextfun){
//             nextfun();
//         }
//     },2000);
// };                                           // nested callback stacks are there one another formed pyramid like strucutere
// getData(1,()=>{                              // it is not readable------------
//     getData(2,()=>{
//         getData(22,()=>{
//             getData(43,()=>{

//             })
//         })
//     })
// })

//-----------------------use async await to hanle this------------------//

// function getData(id){
//   return new Promise((resolve)=>{
//     setTimeout(()=>{
//       console.log("Id:", id);
//       resolve();
//     },1000);
//   });
// }
// async function saini(){
//   await getData(1);
//   await getData(2);
//   await getData(33);
// }
// saini();


//--------------------------------this is promise code for resolve callback hell problem
// function getData(id){
//   return new Promise((resolve)=>{
//     setTimeout(()=>{
//       console.log("Id:", id);
//       resolve();
//     },1000);
//   });
// }
// getData(1)
//   .then(() => getData(2))
//   .then(() => getData(33))
//   .then(() => getData(32))
//   .catch(err => console.error(err));



//---------------------caal back hell resolve pract
//------use promise
// function saini(id){
//     return new Promise((resolve)=>{
//         setTimeout(()=>{
//             console.log("ID: ",id);
//             resolve();
//         },1000);
//     })
// }
// saini(2)
// .then(()=>saini(22))
// .then(()=>saini(23))
// .then(()=>saini(20))
// .catch(err=>console.log(err));


//---------use async await
// function saini(id){
//     return new Promise((resolve)=>{
//         setTimeout(()=>{
//             console.log("ID: ",id);
//             resolve();
//         },1000);
//     })
// }
// async function s(){
//     await saini(1);
//     await saini(13);
//     await saini(12);
// }
// s();





