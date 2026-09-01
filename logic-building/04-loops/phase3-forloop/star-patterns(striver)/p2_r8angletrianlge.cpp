#include<bits/stdc++.h>
using namespace std;

void printr8angle(int n){

    for (int i = 0; i < n; i++)
{
    for (int j = 0; j <=i; j++)
    {
       cout<<"* ";
    }
    cout<<endl;
}



}
int main(){
int testc;
cin>>testc;
for (int i = 0; i < testc; i++)
{
    int n;
    cin>>n;
    printr8angle(n);
}



    return 0;
}