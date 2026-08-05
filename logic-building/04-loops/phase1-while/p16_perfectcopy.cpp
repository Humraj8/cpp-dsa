#include<bits/stdc++.h>
using namespace std;
int main(){
//16. Check whether the given number is a Perfect number.
int n;
cin>>n;
int temp=n;
long store=0;
int i=1;

while (i<temp){
 if(temp % i==0){
 store=store+i;
 }
 i++;
}


if (store == n){
    cout<<"perfect number";
}
else{
    cout<<"not a perfect number";
}


    return 0;
}