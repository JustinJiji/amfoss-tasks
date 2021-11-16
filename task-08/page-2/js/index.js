function buttonOne(){
    localStorage.setItem("message","Hi Everyone.Its me Justin");
}
function buttonTwo(){
    var date = new Date();
    var hour = date.getHours();
    var am_pm = hour >= 12 ? 'PM' : 'AM';
    hour = hour % 12;
    hour = hour ? hour : 12;
    hour = ('0'+hour).slice(-2);
    var minute = date.getMinutes();
    minute = ('0'+minute).slice(-2);
    var second = date.getSeconds();
    second = ('0'+second).slice(-2);
    var Time=hour+' : '+minute+' : '+second+' '+am_pm;
    alert(Time);
}
function buttonThree(){
    document.body.style.background = 'red';
}
function buttonFour(){
    window.location.reload()
}
function buttonFive(){
    window.open();
}
function buttonSix(){
    for(var i =0;i<200;i++){
        console.log("I did It"); 
    }
}