#include<bits/stdc++.h>
using namespace std;
int main(){
//22. Print the cube of each number from 1 to n.

int n;
cin>>n;
if(n<0){
    cout<<"number not applicable because given to find cube from 1 to n";
}
else if(n==0){
    cout<<0;
    return 0;
}
int i=1;
while(i<=n){
cout<<(i*i*i)<<endl;
i++;
}

    return 0;
}