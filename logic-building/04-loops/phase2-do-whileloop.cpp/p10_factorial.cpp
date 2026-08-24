#include<bits/stdc++.h>
using namespace std;
int main(){
//42. Calculate factorial.
int n;
cin>>n;
if(n<0){
    cout<<"factorial of a number less than zero is undefined";
    return 0;
}

if(n==0){
    cout<<1;
    return 0;
}
long long product=1;
do{



product=product*n;
n=n-1;

}while(n>0);


cout<<product<<endl;

    return 0;
}