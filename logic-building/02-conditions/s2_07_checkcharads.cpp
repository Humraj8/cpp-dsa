#include<bits/stdc++.h>
using namespace std;
int main(){
//Write a program to read a character and check whether it is an alphabet, digit or special symbol.
char ch;
cin>>ch;

/*if(ch>=65 && ch<=90 && ch>=97 && ch<=122){
cout<<"this is alphabet";
}
else if(ch>=48 && ch<=57){
cout<<"this is number";
}
else{
    cout<<"the character is special symbol";
} */
/*
if(ch>='A' && ch<='Z' ||ch>='a' && ch<='z' ){
cout<<"this is alphabet";
}
else if(ch>='0' && ch<='9' ){
cout<<"this is number";
}
else{
    cout<<"the character is special symbol";
}
*/


if(isalpha(ch)){
cout<<"this is alphabet";
}
else if(isdigit(ch)){
cout<<"this is number";
}
else{
    cout<<"the character is special symbol";
}

/* Question Askers (returns true or false)
if (isalpha(ch)) {
    // "Is ch a letter?" -> True for 'a'-'z' or 'A'-'Z'
} 
    so we give a alphabet 'a' and now it checks isalpha(ch) is true or not its true it will enter and prints the output

else if (isdigit(ch)) {
    // "Is ch a number?" -> True for '0'-'9'
*/

}