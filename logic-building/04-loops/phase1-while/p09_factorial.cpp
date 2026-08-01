#include<bits/stdc++.h>
using namespace std;
int main(){
//Calculate and print the factorial of a given number.
int  n; // Input n stays regular int (e.g., 15)
cin>>n;

// 1. Guard clause for negative inputs
    if (n < 0) {
        cout << "Error: Factorial is undefined for negative numbers.\n";
        return 0;
    }

    
int i=1;
long long sum=1;// Accumulator MUST be long long to store giant numbers!
while(i<=n){
sum=(i*sum);
i++;
  
}
cout<<sum <<'\n';
 return 0;

}