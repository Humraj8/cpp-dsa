#include<bits/stdc++.h>
using namespace std;
int main(){
//Write a program to swap two numbers without using a third variable.
int a=4;
int b=5;
a=a+b;
/*b=b+a;
a=(9-4);
b=(9-5);*/

b=a-b;
a=a-b;

cout<<a<<endl;
cout<<b;

/* so here what i learned is :

a=(9-4);
b=(9-5);
this kind of harcoded number is not good because if we change the number it will fail miseabraly .
*/

return 0;
}