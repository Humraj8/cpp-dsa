#include<bits/stdc++.h>
using namespace std;
int main(){
//39. Reverse a number.
int n;
cin>>n;
if(n<0){

    n=-n;
}
int rev =0;
do{
int lastdigit= n % 10;
rev =rev * 10 + lastdigit ;
n=n/10;



}while(n>0);


cout<<rev<<endl;




// 1. Make number positive if negative and initialize rev=0.
// 2. In loop, get last digit with n%10 and build reverse as rev*10 + digit.
// 3. Remove last digit with n/10 and repeat until n becomes 0.

    return 0;
}