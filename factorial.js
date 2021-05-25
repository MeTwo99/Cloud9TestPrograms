console.log(factorial(5));

function factorial(x){
    let result = 1;
    while (x > 1){
        result *= x;
        x--;
    }
    return result;
}