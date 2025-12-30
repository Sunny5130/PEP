// function saini(){
//     console.log("Hello saini");
// }
// var saini=function(){
//     console.log("Hello saini");
// }
// saini();


// function saini(num){
//     function saini2(){
//         console.log(num);
//     }
//     saini2();
//     console.log(num);
// }
// saini(2);

function counter() {
    let count = 0;

    return function () {
        count++;
        console.log(count);
    };
}

const inc = counter();
inc(); // 1
inc(); // 2
inc(); // 3

