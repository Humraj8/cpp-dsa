#include<bits/stdc++.h>
using namespace std;
int main(){
//Calculate the sum of all odd numbers from 1 up to n.
int n;
cin>>n;

int i=1;
int sum =0;

while(i<=n){

if(i % 2 != 0){

sum= sum+i;

}

    i++;
}

cout<<sum;



    return 0;
}