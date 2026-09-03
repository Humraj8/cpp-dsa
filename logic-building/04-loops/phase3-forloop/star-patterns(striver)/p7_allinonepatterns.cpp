#include<bits/stdc++.h>
using namespace std;
void print7(int n){
    for (int i =0 ; i < n; i++)
{
    //for space
   for (int j =0; j<(n-i-1) ; j++)
   {
    cout<<" ";
   }
  

//for star patterns
for (int k = 0; k<(2*i+1) ; k++)
  {
    cout<<"*";
   }
//for space 
for (int j = 0; j<(n-i-1) ; j++)
   {
    cout<<" ";
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
print7(n);
}

    return 0;
}