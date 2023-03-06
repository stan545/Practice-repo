function ValidityForm(){
    var email = document.getElementById("email").value;
    var emailError = document.getElementById("emailError");
    var pattern = /^[^ ]+@[^ ]+\.[a-z]{2,3}$/;

    if (email.match(pattern)){
        emailError.innerHTML = "";
        return true;
    } else {
        emailError.innerHTML = "Invalid email format";
        return false;
    }
}

function submitForm(){
    var form = document.getElementById("Biodata");
    var message = document.getElementById("message");
    form.reset();
    
    message.innerHTML = "Form submitted successfully!";
}

document.getElementById("submit").addEventListener("click", function(event)
{
    event.preventDefault();
    if (ValidityForm())
    {
        submitForm();
    }
});

var images = ["res.jpg","apple3.jpg","apple4.jpg","apple5.jpg","apple6.jpg"];
var currentImage = 0;
function changeBackground(){
    currentImage++;
    if (currentImage > images.length -1) {
        currentImage = 0;
    }
    document.body.style.backgroundImage = "url(" + images[currentImage] + ")";
    setTimeout(changeBackground, 5200);
}
setTimeout(changeBackground, 5150);