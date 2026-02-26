/*
* Write a program that takes an integer input and prints its reverse.
*/
#include <iostream>
using namespace std;

int main(){
   int n = -142142;
   int lastDigit = 0;
   int reverse = 0;

   bool isNagative = false;
   if(n < 0){
    isNagative = true;
     n = -n;
   }

   while(n > 0){
     lastDigit = n%10;
     reverse = reverse * 10 + lastDigit;
     n = n/10; 
   };
   
   if(isNagative){
     reverse = -reverse;
   };

   cout << reverse;
}