#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
if(n<0){
    n=-n;
}
long long evensum=0;
long long oddsum=0;
do{

long long lastdigit=n % 10;
if(lastdigit%2==0){
    evensum=evensum+lastdigit;
}
else{
    oddsum=oddsum+lastdigit;
}

n=n/10;

}while (n>0);

cout<<"the summation of even number is :"<<evensum<<endl;

cout<<"the summation of odd number is :"<<oddsum<<endl;



    return 0;
}