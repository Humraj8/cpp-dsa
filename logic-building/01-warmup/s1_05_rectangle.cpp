#include<bits/stdc++.h>
using namespace std;
int main(){
    double l,b;
    cin>>l>>b;
    cout<<"area of the rectangle is :"<<(l*b)<<'\n';
    cout<<"perimeter of the rectangle is :"<<(l+l+b+b)<<endl;
    /*
    mistake i did here is ?

    cout<<"perimeter of the rectangle is :"<<(2(l+b))<<endl;
     why it is giving error becuase
     When we write two things together like 2(l+b), C++ sees a number followed by a parenthesis. It thinks the code is broken because it doesn't assume a hidden multiplication. To make it multiply, we have to explicitly write the multiplication symbol *.

     Correct alternative: cout << (2 * (l + b));

    */
}
