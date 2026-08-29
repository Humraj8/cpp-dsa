#include<bits/stdc++.h>
using namespace std;
int main(){
//Keep taking input until a prime number is entered.
int n;

do{
cout<<"enter number :";
cin>>n;

int count=0;
for(int i=0;i<=n;i++){
if(n%i==0){
count++;
}
}

if(count==2){
    break;
}
else{
    cout<<"not prime ,again"<<endl;
}
}while(1);

cout<<"the prime number is:"<<n;

    return 0;
}