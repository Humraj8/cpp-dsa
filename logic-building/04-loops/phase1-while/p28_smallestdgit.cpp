#include<bits/stdc++.h>
using namespace std;
int main(){
//28. Find the smallest digit in a number.
long long n;
cin>>n;

// Edge Case 1: Negative numbers
if (n<0){
    n=-n;
}

// Edge Case 2: Zero
if (n==0){
    cout<<0<<endl;
    return 0;
}
long long smallest =9;// 9 is the maximum possible single digit
while (n>0){

    long long last= n% 10;
    if(last<=smallest){
        smallest =last;
    }
    n= n/10;

}
cout<<smallest<<endl;

return 0;
}
