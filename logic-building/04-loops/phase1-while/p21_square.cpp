#include<bits/stdc++.h>
using namespace std;
int main(){
//21. Print the square of each number from 1 to n.

int n;
cin>>n;

if(n<0){
    cout<<"number not applicable because given to find square from 1 to n";
}
else if(n==0){
    cout<<0;
    return 0;
}

int i=1;
while (i<=n){

cout<<(i*i)<<endl;
 
    
    i++;
}


    return 0;
}