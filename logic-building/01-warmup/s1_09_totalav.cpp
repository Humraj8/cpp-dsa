#include<bits/stdc++.h>
using namespace std;
int main(){
//Write a program to read the marks of 5 subjects and print the total and average.
float a,b,c,d,e;
cin>>a>>b>>c>>d>>e;
cout<<"the total marks of 5 subject is :"<<(a+b+c+d+e)<<'\n';
cout<<"the average marks of 5 subject is :"<<(((float)1/5)
*(a+b+c+d+e))<<endl;
cout<<"the average marks of 5 subject is :"<<((a+b+c+d+e)/5);

/*
 Why did it give 0?when we use 1/5
 In C++, Data Types dictate math rules.
 1 is an Integer (a whole number).
 5 is an Integer (a whole number).
 When you tell C++ to divide two integers (1 / 5), it performs Integer Division.Because integers cannot have fractions or decimals, C++ aggressively chops off everything after the decimal point.
 1 / 5 in math is 0.2.
 1 / 5 in C++ integer math is 0.
 So your entire formula became 0 * (total), which completely wiped out your total and gave you 0.
 
 cout<<"the average marks of 5 subject is :"<<(0.2*(a+b+c+d+e));
 we harcoded here so to write in a correct way is ?
 cout<<"the average marks of 5 subject is :"<<(((float)1/5)*(a+b+c+d+e));so now we would get 0.2 not 0 and then we would get 35 average

 
 
 */

return 0;
}