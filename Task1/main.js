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
