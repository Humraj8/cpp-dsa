#include<bits/stdc++.h>
using namespace std;
int main(){
// Calculate and print the sum of the first n natural numbers.
int n;
cin>>n;

int i=1;
int sum=0; // 1. Accumulator variable initialized to 0

while(i<=n){

    sum=sum+i; // 2. Add current number 'i' into 'sum'
    i=i+1;     // 3. Increment counter
   
  
}
cout<<"the sum is : "<<sum; //we use outside while loop because we need a final sum ,if we use inside then it will have gone in loop ,which we dont need .
return 0;
}