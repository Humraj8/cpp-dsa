#include<bits/stdc++.h>
using namespace std;
int main(){
//Create a menu-driven program.
int n;

do{
cout<<"the dishes we have "<<endl;
cout<<"1: briyani"<<endl;
cout<<"2: dahi"<<endl;
cout<<"3: fried chicken"<<endl;
cout<<"4: paneer"<<endl;
cout<<"0: Exit"<<endl;

cout<<"enter the dish number you want"<<endl;

cin>>n;


switch (n)
{
case 1:
    cout<<"briyani is ordered"<<endl;
    break;
case 2:
    cout<<"dahi is ordered"<<endl;
    break;
case 3:
    cout<<"fried chicken is ordered"<<endl;
    break;
case 4:
    cout<<"paneer is ordered"<<endl;
    break;
case 0:
    cout<<"thank you"<<endl;
    break;
default:cout<<"invalid number"<<endl;

    break;
}

}while(n!=0);



 return 0;
}