#include <iostream>
#include <algorithm>
#include <string>
using std::string;
//function to reverse
void palindromeChecker(string str){
  // new variable is equal to input
  string reversedString = str;
  // new variable is reversed using a built in function
  std::reverse(reversedString.begin(), reversedString.end());
  //comparing reversed to input parameter
  if(reversedString == str){
    std::cout << str << "is a palindrome" << std::endl;
  }
  else
    std::cout << str << "is not a palindrome" << std::endl;

}

int main(){
  //variables to use declared
  string var1 = "OHO";
  string var2 = "Not A PALINDROME";
  string var3 = "12345654321";
  std::cout << "Reversing 2 strings"<< std::endl;
  //calling the function
  palindromeChecker(var1);
  palindromeChecker(var2);
  palindromeChecker(var3);

}
