// const bulbswitch =document.querySelector('#one')
// const bulb=document.querySelector('#off')

// bulbswitch.addEventListener('click',function(){

// console.log(bulb.src)
// if(bulb.src.match('off'))
// {
//     bulb.src="./img/on.png";
//     bulbswitch.innerHTML='off';
// }
// else
// {
//     bulb.src="./img/off.png";
//     bulbswitch.innerHTML='on';    
// }

// });

// const root = document.querySelector('#root');
// const button = document.querySelector('#button');

// function createItem(items   )
// {
//     //card
//     const card = document.createElement('div');
//     card.classList.add('card');

//     //photo
//     const photo = document.createElement('img');
//     photo.src = items.thumbnailUrl;

//     //Tittle
//     const title = document.createElement('h4');
//     title.innerHTML=items.title;
//     card.appendChild(photo);
//     card.appendChild(title);
//     root.appendChild(card);
// }

// function displayImage(items)
// {
//     items.forEach(function(items)
//     {
//         cereateImage(items);
//     });
// }

// button.addEventListener('click', function()
// {
//     fetch('https://jsonplaceholder.typicode.com/todos/1')
//     .them((res)=>res.json())
//     .then((items)=>{
//         // displayImage(items);
//         console.log(items);
//     });

// });

// const root = document.querySelector(`#root`);
// const button = document.querySelector(`button`);

// function creatItem(item) {
//     // CARD : 
//     const card = document.createElement(`div`);
//     card.classList.add(`card`)

//     // PHOTOS : 
//     const photo = document.createElement(`img`);
//     photo.src = item.thumbnailUrl;


//     // title

//     const title = document.createElement(`h6`);
//     title.innerHTML = item.title;
//     card.appendChild(photo);
//     card.appendChild(title);
//     root.appendChild(card);


// }

// function displayImages(items) {
//     items.forEach(function (items) {
//         creatItem(items);

//     });
// }

// button.addEventListener(`click`, function () {

//     fetch('https://jsonplaceholder.typicode.com/photos')
//         .then((res) => res.json())
//         .then((items) => {
//             displayImages(items);
//             // console.log(items);

//         });
// });












