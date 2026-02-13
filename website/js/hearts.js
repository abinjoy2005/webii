setInterval(()=>{
let heart=document.createElement("div");
heart.className="heart";
heart.innerHTML="💖";
heart.style.left=Math.random()*100+"vw";
heart.style.fontSize=(10+Math.random()*25)+"px";

document.body.appendChild(heart);

setTimeout(()=>heart.remove(),6000);

},300);
