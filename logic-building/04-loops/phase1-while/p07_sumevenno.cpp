#include<bits/stdc++.h>
using namespace std;
int main()
{
//Calculate the sum of all even numbers from 1 up to n.
int n;
cin>>n;
/*
int i=1;
int sum=0;
while (i<=n){

if(i % 2 == 0){

 sum=sum+i;
   
}
i++;
}
cout<<sum;
*/
int i=2;
int sum=0;
while(i<=n){
    sum+=i;
    i+=2;
}
cout<<sum;
    return 0;
}