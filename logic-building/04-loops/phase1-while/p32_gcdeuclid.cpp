#include<bits/stdc++.h>
using namespace std;
int main(){
//Find GCD using the Euclidean method.
int n,m;
cin>>n>>m;
if (n ==0 && m== 0){
    cout<<0;
    return 0;
}

if (n<0){
n=-n;}

if(m<0){
    m=-m;
}

if(n== 0 && m!=0){
    cout<<m;
    return 0;
}
else if(n!=0 && m==0){
    cout<<n;
    return 0;
}




if(n>m){
    swap(n,m);
}

while(n<=m){
    int remainder= m % n;
    if(remainder==0){
        cout<<"the gcd using euclidean method is :"<<n<<endl;
        return 0;
    }
    m =n;
    n=remainder;


}




return 0;
}