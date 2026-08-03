#include<bits/stdc++.h>
using namespace std;
int main(){
//Count and print the total number of digits in a given number.
int n;
cin>>n;

int count=0;
if(n<0)n=-n;

if(n==0) {
cout<< 1<<endl;
return 0;
}

while(n>0){

n=n/10;
count=count+1;



}
cout<<count;
return 0;




/*
learnt more about % and /
when to use and to when to dont
and also how to track the count digit
*/
}