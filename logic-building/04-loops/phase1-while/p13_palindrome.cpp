#include<bits/stdc++.h>
using namespace std;
int main(){
//13. Check whether the given number is a palindrome.
int n;
cin>>n;
int an= n;


int rev=0;

while(n>0){
int lastdigit=n%10;
rev=(rev*10)+lastdigit;
n=n/10;
}

if(rev==an){
cout<<"the given number is palindrome";
    
}
else{
    cout<<"not a palindrome number";
}
return 0;



/* here i gues all i need to think more was to save a copy of N before while loop is destroyed */
}