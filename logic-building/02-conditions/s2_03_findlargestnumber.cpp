#include<bits/stdc++.h>
using namespace std;
int main(){
//⁠Write a program to read three numbers and find the largest among them.
float num1,num2,num3;
cin>>num1>>num2>>num3;
if (num1>=num2 && num1>=num3){
    cout<<"num1 is greatest";

}
else if(num2>=num1 && num2>=num3){

cout<<"num2 is greatest ";

}
else{

    cout<<"num3 is greatest";
}



    return 0;
}