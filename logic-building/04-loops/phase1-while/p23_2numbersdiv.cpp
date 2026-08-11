#include<bits/stdc++.h>
using namespace std;
int main(){
//23 Print all numbers between a and b divisible by 7.
int n;
int m;
cin>>n>>m;


// Edge Case: If n is greater than m, swap them so n is always the smaller bound
if(n>m){
   swap(n,m);
}

int i =n;
while(i<=m){
    
if(i % 7 == 0){
cout<<i<<endl;

}

i++;

}

return 0;
}


