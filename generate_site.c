#include <stdio.h>
#include <stdlib.h>

void createLogin()
{
    FILE *fp = fopen("website/login.html", "w");

    fprintf(fp,
    "<!DOCTYPE html>\n"
    "<html>\n"
    "<head>\n"
    "<title>For My Kunjipenneh</title>\n"
    "<link rel='stylesheet' href='css/style.css'>\n"
    "<script src='js/login.js'></script>\n"
    "</head>\n"
    "<body class='login-body'>\n"

    "<div class='login-box'>\n"
    "<h1>💖 Happy Valentine’s Day 💖</h1>\n"

    "<p class='quote'>To my dearest Kunjipenneh,<br>"
    "You are my happiness and my heart ❤️</p>\n"

    "<input id='username' placeholder='Username'>\n"
    "<input id='password' type='password' placeholder='Password'>\n"
    "<button onclick='checkLogin()'>Enter My Heart 💘</button>\n"

    "<p id='error' class='error'></p>\n"

    "</div>\n"
    "</body>\n"
    "</html>"
    );

    fclose(fp);
}

void createGallery()
{
    FILE *fp = fopen("website/gallery.html", "w");

    fprintf(fp,
    "<!DOCTYPE html>\n"
    "<html>\n"
    "<head>\n"
    "<title>Our Memories</title>\n"
    "<link rel='stylesheet' href='css/style.css'>\n"
    "</head>\n"
    "<body>\n"

    "<h1 class='title'>Our Beautiful Memories 💕</h1>\n"
    "<div class='gallery'>\n"
    );

    for(int i=1;i<=20;i++)
        fprintf(fp,"<img src='images/%d.jpg'>\n", i);

    fprintf(fp,
    "</div>\n"

    "<div class='note-btn'>\n"
    "<a href='note.html'>Read My Note 💌</a>\n"
    "</div>\n"

    "</body>\n"
    "</html>"
    );

    fclose(fp);
}

void createNote()
{
    FILE *fp = fopen("website/note.html", "w");

    fprintf(fp,
    "<!DOCTYPE html>\n"
    "<html>\n"
    "<head>\n"
    "<title>My Love Note</title>\n"
    "<link rel='stylesheet' href='css/style.css'>\n"
    "</head>\n"
    "<body class='note-body'>\n"

    "<div class='note-box'>\n"
    "<h1>To My Annama ❤️</h1>\n"

    "<p>"
    "Every moment with you is my favourite memory.<br><br>"
    "You make my life brighter and happier.<br><br>"
    "Happy Valentine’s Day My Love 💕"
    "</p>\n"

    "</div>\n"
    "</body>\n"
    "</html>"
    );

    fclose(fp);
}

void createCSS()
{
    FILE *fp = fopen("website/css/style.css", "w");

    fprintf(fp,
    "body {margin:0;font-family:Arial;}\n"

    ".login-body {background:linear-gradient(45deg,#ff4e8a,#ff9eb5);height:100vh;display:flex;justify-content:center;align-items:center;}\n"

    ".login-box {background:white;padding:30px;border-radius:15px;text-align:center;width:300px;}\n"

    ".quote {color:#ff2f6e;font-style:italic;}\n"

    "input {width:90%%;padding:10px;margin:10px;border-radius:8px;}\n"

    "button {background:#ff2f6e;color:white;padding:10px;border:none;border-radius:10px;cursor:pointer;}\n"

    ".error {color:red;}\n"

    ".title {text-align:center;color:#ff2f6e;margin-top:20px;}\n"

    ".gallery {column-count:3;padding:20px;}\n"

    ".gallery img {width:100%%;margin-bottom:10px;border-radius:15px;transition:0.3s;}\n"

    ".gallery img:hover {transform:scale(1.05);}\n"

    ".note-body {background:#ffe6ee;display:flex;justify-content:center;align-items:center;height:100vh;}\n"

    ".note-box {background:white;padding:40px;border-radius:20px;width:400px;text-align:center;}\n"

    ".note-btn {text-align:center;margin-bottom:30px;}\n"
    ".note-btn a {background:#ff2f6e;padding:12px;color:white;text-decoration:none;border-radius:10px;}\n"
    );

    fclose(fp);
}

void createJS()
{
    FILE *fp = fopen("website/js/login.js", "w");

    fprintf(fp,
    "function checkLogin(){\n"
    "var u=document.getElementById('username').value;\n"
    "var p=document.getElementById('password').value;\n"

    "if(u==='kunjikunja' && p==='0330')\n"
    "window.location='gallery.html';\n"
    "else\n"
    "document.getElementById('error').innerText='Wrong Username or Password';\n"
    "}"
    );

    fclose(fp);
}

int main()
{
    system("mkdir website");
    system("mkdir website/css");
    system("mkdir website/js");
    system("mkdir website/images");

    createLogin();
    createGallery();
    createNote();
    createCSS();
    createJS();

    printf("Valentine website created inside 'website' folder ❤️\n");

    return 0;
}
