#include<bits/stdc++.h>
using namespace std;
int main(){
// ⁠Write a program to read a number and check whether it is divisible by both 3 and 5.
int num;
cin>>num;
if(num%3==0 && num%5==0){
cout<<"the number is divisible by both 3 and 5";
}
else{
    cout<<"the number is not divisible by 3 and 5";
}
/* we can use num % 15 == 0 instead of above two beacuse:*/
// Rule: (num % a == 0 && num % b == 0) is equivalent to (num % LCM(a, b) == 0)
// For primes (3 & 5): LCM = 3 * 5 = 15  -->  (num % 15 == 0)
// With shared factors (12 & 16): LCM is 48, NOT 192  -->  (num % 48 == 0)

}