#include<bits/stdc++.h>
using namespace std;
int main(){
//Find and print the product of all digits of a given number.
int n;
cin>>n;
int last_digit;

long long prod=1;
//edge case 1: handle zero

if(n==0){
cout<<0<<endl;
return 0;}

//edge case 2: handle negative number

//if(n<0)n=-n;
n=(n<0)? -n:n;

while(n>0)
{
last_digit=(n%10);
prod=last_digit *prod;
n=n/10;
}    
cout<<prod;


return 0;
}