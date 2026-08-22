#include<bits/stdc++.h>
using namespace std;
int main(){
//38. Count digits in a number.
int n;
cin>>n;
int count=0;

do {
int lastdigit= n % 10;
n=n/10;
count++;
}while(n>0);


cout<<count<<endl;

    return 0;
}