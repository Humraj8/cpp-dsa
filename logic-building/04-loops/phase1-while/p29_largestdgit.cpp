#include<bits/stdc++.h>
using namespace std;
int main(){
//29. Find the largest digit in a number.

long long n;
cin>>n;
if(n<0){
    n=-n;
}

if(n==0){
cout<<0<<endl;
return 0;
}

int largest =0;
while (n>0){
    long long last= n % 10;
   if (last>largest){
   largest =last;
   }
   n=n/10;
}

cout<<largest<<endl;


/* this seems to be the anchor problem where we do it like this
To find the MINIMUM  --> Start at the MAXIMUM possible value (9)
To find the MAXIMUM  --> Start at the MINIMUM possible value (0)


there seems to be another approach with out setting anything doing that on next file
*/

    return 0;
}