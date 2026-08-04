#include<bits/stdc++.h>
using namespace std;
int main(){
//14. Find and print the sum of digits of the given number.
int n;
cin>>n;


long long sum = 0;


if(n<0){

    
}

while(n>0){

int lastdigit= n%10;
sum=(sum+lastdigit);
n=n/10;
}

cout<<sum;


return 0;
}