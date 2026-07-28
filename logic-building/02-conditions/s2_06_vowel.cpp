#include<bits/stdc++.h>
using namespace std;
int main(){
//⁠Write a program to read a character and check whether it is a vowel or a consonant.
char ch;
cin>>ch;
ch= tolower(ch);
if (ch == 'a'||ch == 'e' ||ch == 'i' ||ch == 'o'|| ch == 'u'){
    cout<<"the character is vowel";

}
else
{
    cout<<"the character is consonant";
}


/*
ch= tolower(ch); means in ch what ever we gave upper  if it is upper(A) it change the character to lowercase(a) as u can see the below lower case character(a) matches with coming lowercase(a) ,so now it prints chatacter is vowel ...
with the help of this we dont have to write 10 conditions
if (ch == 'a'||ch == 'e' ||ch == 'i' ||ch == 'o'|| ch == 'u'||ch == 'A'||ch == 'E' ||ch == 'I' ||ch == 'O'|| ch == 'U')
*/

    return 0;
}