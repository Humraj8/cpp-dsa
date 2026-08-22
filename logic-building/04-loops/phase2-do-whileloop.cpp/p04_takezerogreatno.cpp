#include<bits/stdc++.h>
using namespace std;
int main(){
//37.Take input until 0 is entered and print the largest number.

int i;


int largest=INT_MIN;

do{
cin>>i;

if(i!=0 && i>largest)
{

largest =i;
}


} while (i!=0);


cout<<largest<<endl;
    return 0;

// 1. Initialize largest to INT_MIN (smallest possible) so any input will be bigger.
// 2. Keep taking input in do-while loop and update largest only if i != 0 and i > largest.
// 3. Loop stops when 0 is entered and we print the largest number found.
}