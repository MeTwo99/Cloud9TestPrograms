var x = 5;
console.log("The factorial of " + x + " is " + factorial(x));

function factorial(x){
    let result = 1;
    while (x > 1){
        result *= x;
        x--;
    }
    return result;
}