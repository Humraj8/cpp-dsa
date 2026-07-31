#include<bits/stdc++.h>
using namespace std;
int main(){
//Print the multiplication table of a given number from n x 1 to n x 10.
int i=1;
int n;
cin>>n;
while(i<=10){
cout<<n << " x " <<i <<" = " << (n*i)<<endl;
i++;
}


    return 0;
}