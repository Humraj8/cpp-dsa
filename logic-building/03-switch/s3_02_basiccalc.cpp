#include<bits/stdc++.h>
using namespace std;
int main(){
/* Problem 22: The Basic Calculator
Write a program that takes two integers and a character operator (+, -, *, /) as input. Use a switch statement on the operator to perform the correct math calculation and print the result. */
float num1 ,num2;
char op;
cout<<"enter two number  :"; 
cin>>num1>>num2;
cout<<"enter the operator (+ , - , * , /) : \n";
cin>>op;
 switch(op){
  case '+':
  cout<<"the addition of both numebrs are :"<<(num1+num2);
  break;


   case '-':
   cout<<"the subtraction  of both numebrs are :"<<(num1-num2);
   break;


   case '*':
   cout<<"the multiplication  of both numebrs are :"<<(num1*num2);
   break;


   case '/':
   if(num2==0){
    cout<<"error :any number divided by zero is undefined";
    }
    else{
    cout<<"the division of both numebrs are :"<<(num1/num2);
    }
    break;


    default:
    cout<<"invalid character";
   
 }



return 0;
}