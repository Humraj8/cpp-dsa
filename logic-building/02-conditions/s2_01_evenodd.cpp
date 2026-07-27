#include<bits/stdc++.h>
using namespace std;
int main(){
//⁠Write a program to read a number and check whether it is even or odd.
int number;
cin>>number;
if((number % 2)== 0){
    cout<<"the number is even";

}
else{
    cout<<"the number is odd";

}

/* terinary operator

cout<<(number % 2==0 ? "even":"odd");

(Think of it like a quick question: Is the condition true ? [Do this if true] : [Do this if false])

*/
return 0;
}