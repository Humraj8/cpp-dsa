#include<bits/stdc++.h>
using namespace std;
int main(){
//Reverse the given number and print the reversed value.

// Problem: Reverse digits of a number (e.g. -234 -> -432)
int n;
cin>>n;
int lastdgit;



// EDGE CASE HANDLING (Negative numbers)
// 'isNegative' acts as a sticky note to remember original sign.
// We flip 'n' to positive so modulo (%) math is clean and predictable.
bool isnegative=false;
if(n<0){
isnegative=true; // Remember it was negative!
n=-n; // Turn -234 into +234
    
}
// Accumulator variable to store the newly built reversed number
int rev=0;

// 3. CORE LOOP ENGINE (Shrinking N)
 // Runs as long as 'n' has digits left (n > 0).
while (n>0)
{
lastdgit = n%10; // Extract: Get last digit (234 % 10 = 4)
rev=(rev*10)+lastdgit; // Shift & Append: Multiply by 10 pushes digits left
n=n/10; // Discard: Remove last digit (234 / 10 = 23)

}

//4. POST-PROCESSING (Restoring Sign)
// Check our sticky note: If input was originally negative, restore the '-' sign.
if(isnegative){
rev=-rev;

}

cout<<rev;



return 0;
}