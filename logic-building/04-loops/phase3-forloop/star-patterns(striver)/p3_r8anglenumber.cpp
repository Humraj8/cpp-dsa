#include<bits/stdc++.h>
using namespace std;

void r8anglefornumber(int n)
{
for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= i; j++)
    {
        cout<<j;
    }
    cout<<endl;
}



}
int main(){
int tescase;
cin>>tescase;
for (int i = 0; i < tescase; i++)
{
int n;
cin>>n;
r8anglefornumber(n);
}



    return 0;
}