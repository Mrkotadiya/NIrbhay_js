// function first(){
//     console.log(1);
//     console.log(2);
//     console.log(3);
//     setTimeout(function(){
//         console.log(4);
//     },500);
// }
// function second(){
//     console.log(5);
// }
// first();
// second();

// let promise = new Promise(function(resolve, reject)
// { 
//     const x="Google";
//     const y="Google";
//     if(x!=y)
//     { 
//         resolve();
//     }
//     else{
//         reject();
//     }
// });
// promise
//     .then(function(){
//         console.log("Success,... You are a Devloper");
//     })
//     .catch(function(){
//         console.log(" Some Error Has Occurred");
//     });
// console.log(promise);

const array1 = ['a', 'b', 'c'];

const iterator1 = array1.entries();

console.log(iterator1.next().value);
console.log(iterator1.next().value);
console.log(iterator1.next().value);





