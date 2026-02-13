let slides=document.querySelectorAll(".slide");
let index=0;

function showSlide(i){
slides.forEach(s=>s.classList.remove("active"));
slides[i].classList.add("active");
}

window.addEventListener("wheel",(e)=>{
if(e.deltaY>0) index=(index+1)%slides.length;
else index=(index-1+slides.length)%slides.length;
showSlide(index);
});

/* Mouse Tilt */
const slider=document.getElementById("slider");

slider.addEventListener("mousemove",(e)=>{
let x=(e.offsetX/slider.clientWidth-0.5)*25;
let y=(e.offsetY/slider.clientHeight-0.5)*-25;

slider.style.transform=`rotateY(${x}deg) rotateX(${y}deg)`;
});

slider.addEventListener("mouseleave",()=>{
slider.style.transform="rotateY(0deg) rotateX(0deg)";
});

/* Mobile Swipe */
let startX=0;

slider.addEventListener("touchstart",(e)=>{
startX=e.touches[0].clientX;
});

slider.addEventListener("touchend",(e)=>{
let endX=e.changedTouches[0].clientX;

if(startX>endX) index=(index+1)%slides.length;
else index=(index-1+slides.length)%slides.length;

showSlide(index);
});
