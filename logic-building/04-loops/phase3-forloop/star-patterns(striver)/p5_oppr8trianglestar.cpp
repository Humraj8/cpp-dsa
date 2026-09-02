#include<bits/stdc++.h>
using namespace std;
void oppr8trianglestar(int n){
    for (int i = 0; i < n; i++)
{
   for (int j = n; j > i; j--)
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
oppr8trianglestar(n);
}







    return 0;
}