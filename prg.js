
// var a = 0;
// var b = 0;
// var d = 0;
// var c = 0;
// var btn = document.getElementById("btn");
// var disp = document.getElementById("display");
// var js = document.getElementById("js")
// var node = document.getElementById("node")
// var rust = document.getElementById("rust")
// var c = document.getElementById("c")
// btn.onclick = function ()
//     {
//         count++;
//         disp.innerHTML = count;
    
//         if (group1 == n1)
//         {
//             js = document.getElementById("js").value = a++;
            
//         }else if (group1 == n1)
//         {
//             js = document.getElementById("python").value = a++;
            
//         }
//     } 


// window.onload = function ()
// {
//     // var count = 0;
    

//     btn.onclick = function ()
//     {
//         count++;
//         disp.innerHTML = count;
    
//         if (group1 == n1)
//         {
//             js = document.getElementById("js").value = a++;
            
//         }
//     }
// }

var count = 0;
    var a = 0;
    var b = 0;
    var d = 0;
    var c = 0;
    var btn = document.getElementsByName("btn");
    var disp = document.getElementsByTagName("display");
    var js = document.getElementsByName("js")
    var node = document.getElementsByName("node")
    var rust = document.getElementsByName("rust")
    var c = document.getElementsByName("c")
    btn.onclick = function ()
    {
        count++;
        disp.innerHTML = count;
    
        if (group1 == n1)
        {
            js = document.getElementById("js").value = a++;
        }else if (group1 == n2)
        {
            js = document.getElementById("python").value = a++;
         
       }else if (group1 == n3)
       {
           js = document.getElementById("python").value = a++;
        
      }
    }


