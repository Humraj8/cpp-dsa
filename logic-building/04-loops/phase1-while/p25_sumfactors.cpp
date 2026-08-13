#include<bits/stdc++.h>
using namespace std;
int main(){
//Find the sum of all factors of the given number.

int n;
cin>>n;

int i=1;
long long sum =0;
//for zero 
if(n==0){
    cout<<"Zero has infinitely many factors";
    return 0;
}
//for negative edge cases
if(n<0){

    n=-n;
}
//main scenario for positive integers
while(i<=n){
if(n % i == 0){
sum=sum +i;
}
i++;
}

cout<<sum<<endl;


return 0;
}