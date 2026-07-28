#include<bits/stdc++.h>
using namespace std;
int main(){
//Write a program to read the marks of a student and print the grade (A/B/C/D/Fail).
int num;
cin>>num;
if(num<0 || num>100)
{
 cout<<"invalid marks";

}
else if(num<25){
cout<<"the student has failed";
}
else if(num<40){
    cout<<"the grade is D";
}
else if(num<70){
    cout<<"the grade is C";
}
else if(num<80){
    cout<<"the grade is B";
}
else {
    cout<<"the grade is A";
}
}