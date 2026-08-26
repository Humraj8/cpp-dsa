#include<bits/stdc++.h>
using namespace std;
int main(){
//47. Find sum of digits.
int n;
cin>>n;
if(n<0){
    n=-n;
}

long long sum=0;

do{
int lastdigit= n % 10;
sum=sum+lastdigit;
n=n/10;
}while(n>0); 

cout<<sum<<endl;

return 0;
}