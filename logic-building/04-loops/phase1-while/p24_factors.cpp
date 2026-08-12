#include<bits/stdc++.h>
using namespace std;
int main(){
 //24. Print all factors of the given number.
int n;
cin>>n;

if(n==0){
    cout<<"Zero has infinitely many factors";
    return 0;
}


if(n<0){
    n=-n;
}


int i=1;

while(i<=n){
if(n % i == 0){

cout<<i<<endl;
}

i++;
}


 return 0;
}