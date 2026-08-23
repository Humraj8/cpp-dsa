#include<bits/stdc++.h>
using namespace std;
int main(){
//40. Check palindromes.

int n;
cin>>n;
//check negative numebers
if(n<0){
    cout<<"the number is not palindrome";
    return 0;
}

int temp =n;
int rev = 0;


do{
int lastdigit= temp % 10;
rev = rev*10+lastdigit;
temp=temp /10;




}while(temp>0);

if(rev== n){

    cout<<"the number is palindrome numeber";
    
}
else{
    cout<<"the numebr is not palindrome numnber";
}





return 0;
}