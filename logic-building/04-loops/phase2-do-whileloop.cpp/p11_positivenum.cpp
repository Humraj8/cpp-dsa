#include<bits/stdc++.h>
using namespace std;
int main(){
//46. Count positive numbers until a negative number is entered.

int n;
int count=0;

do{

cin>>n;
if(n>0){
count++;
}

}while(n>=0);

cout<<count;


    return 0;
}