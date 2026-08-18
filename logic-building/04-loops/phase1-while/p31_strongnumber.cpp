#include<bits/stdc++.h>
using namespace std;
int main(){
//Check if a number is a Strong number.
long long n;
cin>>n;


// Edge Case: 0 is not a strong number (0! = 1 != 0)
if (n==0){
cout << "Not a Strong Number" << endl;
return 0;
}
if(n<0){
    n=-n;
}

long long temp =n;
long long sum= 0;// Sum of factorials of all digits


// Outer loop: Shred number digit by digit
while(temp>0){

 int lastdigit= temp % 10;

 // --- Inner loop: Calculate factorial of lastdigit ---

 int fact =1;
 int i=1 ;
 
 while(i<=lastdigit){
  fact= fact * i;
 i++;
 }

// Add this digit's factorial to our running total
sum = sum + fact ;
temp = temp/10;


}


// Final comparison with the original number
if (sum == n){
    cout<<"the number is strong number "<<endl;
}
else{

    cout<<"the number is not strong number";
}

    return 0;
}