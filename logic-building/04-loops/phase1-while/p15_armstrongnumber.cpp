#include<bits/stdc++.h>
using namespace std;
int main(){
//15. Check whether the given number is an Armstrong number.
int n;
cin>>n;

int count=0;



// STEP 1: Count total digits using temporary variable

int temp = n; // Use working copy so 'n'  stay safe
while(temp>0){
temp=temp/10;
count=count+1;

}

//STEP 2: Extract each digit & sum (digit ^ count)

temp=n; // Reset temporary variable
long long sum=0;
while(temp>0){
   int lastdigit=temp % 10;
   sum=sum+pow(lastdigit,count);
   temp=temp/10;
}

// STEP 3: Compare result with original n
if(n==sum){
    cout<<"the number is armstrong number";
}
else{

    cout<<"the number is not a armstrong number";
}

//pow(base, exponent)
return 0;
}