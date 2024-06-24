var RandomNumber1 = Math.floor(Math.random()*6)+1;
var RandomImage1="images/dice"+RandomNumber1+".png";
document.querySelector(".img1").setAttribute("src",RandomImage1);

var RandomNumber2 = Math.floor(Math.random()*6)+1;
var RandomImage2 = "images/dice"+RandomNumber2+".png";
document.querySelector(".img2").setAttribute("src",RandomImage2);

if(RandomNumber1>RandomImage2)
    {
        document.querySelector("h1").innerText="Player 1 Wins";
    }