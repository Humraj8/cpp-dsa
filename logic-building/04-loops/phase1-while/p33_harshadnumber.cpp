#include<bits/stdc++.h>
using namespace std;
int main(){
//Check if a number is a Harshad number.
int n;
cin>>n;

// Edge Case: 0 is not a Harshad number (division by zero is undefined)
if(n==0){
    cout<<"the number is not harshad number";
    return 0;
}

// Shield 1: Convert negative numbers to positive FIRST
if (n<0){
    n=-n;
}

// Backup copy after ensuring positive sign
int temp =n;
int sum =0;


while(n>0){
int remainder= n % 10;
sum=sum+remainder;
n= n/10;
}

// Check: Is the original number divisible by the sum of digits?
if(temp % sum == 0){
    cout<<"the number is harshad number";
}
else{
    cout<<"the number is not harshad number";
}


    return 0;
}