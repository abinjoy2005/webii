function checkLogin(){
let u=document.getElementById("username").value;
let p=document.getElementById("password").value;

if(u==="kunjikunja" && p==="0330")
window.location="gallery.html";
else
document.getElementById("error").innerText="Wrong Password ❤️";
}

