#include<bits/stdc++.h>
using namespace std;
int main(){
//Count frequency of each digit in a number.
long long n;
cin>>n;

// Shield 1: Handle negatives
if(n<0){
    n=-n;
}

// Shield 2: If input is 0, it has exactly one '0'
if (n==0){
    cout<<"Digit 0 occurs 1 time(s)" << endl;
}

// 1. BOSS LOOP: Try every digit d from 0 up to 9
int d=0;
while(d<=9){


// 2. Make a fresh photocopy of n so original n is not lost
long long temp =n;


// 3. Reset counter for this specific digit 'd'
int count =0;

// 4. WORKER LOOP: Shred 'temp' and count matches with 'd'


while(temp>0){

int last = temp % 10;      // Grab last digit
if (last == d ){           // Is it the digit we are hunting for?
    count++;               // Yes! Count it
}
temp = temp/10;           // Throw away last digit

}


// 5. If we found this digit at least once, print the result

if (count>0){
cout<< "digit :" << d << " occurs :" << count <<"time(s)"<<endl;
}


// 6. Boss moves to next digit (0 -> 1 -> 2 ... -> 9)
d++;

}

return 0;
}