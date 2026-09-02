#include<bits/stdc++.h>
using namespace std;
void oppr(int n){
    for (int i =0 ; i < n; i++)
{
   for (int j = 1; j <= n -i; j++)
   {
    cout<<j<<" " ;
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
oppr(n);
}







    return 0;
}