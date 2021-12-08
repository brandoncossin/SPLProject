function palindromeChecker(str){
    //splits string between letters so then it can be reversed and rejoined
    var splitString = str.split("");
    //reversed and rejoined
    var reversedString = splitString.reverse().join("");
    //compare the reverse string to original parameter
    if(reversedString == str){
        console.log(str, "is a palindrome")
    }
    else{
        console.log(str, "is not a palindrome")
    }
}
//variables created
let var1 = "OHO"
let var2 = "NOT A PALINDROME"
let var3 = "12345654321"
console.log("Reversing 2 strings")
//function called with variables
palindromeChecker(var1);
palindromeChecker(var2);
palindromeChecker(var3);
