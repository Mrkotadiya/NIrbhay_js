// let student={
//     sname:"Nirav",
//     course:"NodeJs",
//     adderss:{
//         state:"Gujarat",
//         city:"Surat",
//         taluka:{
//             area:"Varacha",
//             street:"Bhagawan Nagar",
//             houseno:{
//                 wings:"A",
//                 rowhouseNo:"37"
//             },
//         },
//     },
// };
// console.log(student)
// const{sname,course,adderss}=student;
// console.log(sname," ",course," ",adderss)
//-------------------------------------------------------------
// Extracting multiple properties
//-------------------------------------------------------------

    // const{state,city}=student.adderss;
    // console.log(state," ",city);

//-----------------------------------------------------------------
//-----------Aliases-------------------
//------------------------------------------------------------------

// const{state:mystate,city}=student.adderss;
// console.log(mystate," ",city);

//-------------------------------------------------------------
//---------Default value -------------------------
//------------------------------------------------------------

// const{state,city,hobbie=["gaming"]}=student.adderss;
// console.log(state," ",city," ",hobbie);

//--------------------------------------------------------------
// Extracting properties form nested object
//--------------------------------------------------------------

// const{adderss:{state,city},
// }=student;
// console.log(city," ",state);

//---------------------------------------------------------------
//Extracting a dynamic name properties
//--------------------------------------------------------------
// const sales = [
//     { item: 'PS4 Pro', stock: 3, original: 399.99 },
//     { item: 'Xbox One X', stock: 1, original: 499.99, discount: 0.1 },
//     { item: 'Nintendo Switch', stock: 4, original: 299.99 },
//     { item: 'PS2 Console', stock: 1, original: 299.99, discount: 0.8 },
//     { item: 'Nintendo 64', stock: 2, original: 199.99, discount: 0.65 }

// ];


// console.log(sales)
// let  original=399.9;
// let stock=3;
// let total = stock*original;
// console.log(total);
// JSONN.stringifytotal;

// *-------------------------------------------------------*
// const prop=" sname";
// const{[prop]:item}=sales;
// console.log(sname);

//----------------------------------------------------------------
// Rest object after destractring
//--------------------------------------------------------------

// const{sname,...rest}=student;
// console.log(sname," ",rest);


// -----------------------------------------------------------------
// const person = function(fname,year){
//     this.firstName = fname;
//     this.birthYear = year;
//     this.calcAge = function()
//     {
//         console.log(this.firstName," is",2021-this.birthYear,"Year Old.")
//     };
// };
// const nirav=new Person('Nirbhay',2003)
// nirav.calcAge();

// -----------------------------------------------------------------


// Person.hey=function()
// { 
// console.log('hey there.......')
// console.log(this)
// }
// Person.hey();
// // console.log()


// Person.prototype.calcAgea=function(){
//     console.log(2002-this.birthYear);
// };
// const nirav1=new Person('Nirbhay',2002)
// const hardik=new Person('Nirbhay',2002)
// nirav1.calcAgea();
// hardik.calcAgea();
// console.log(Person.prototype);
// console.log(nirav1.prototype)











