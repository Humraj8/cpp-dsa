#include<bits/stdc++.h>
using namespace std;
int main(){
//Implement a simple calculator using a menu.
int n;
int a,b;
do {
cout<<"1. additon"<<endl;
cout<<"2. subtraction"<<endl;
cout<<"3. multiplication"<<endl;
cout<<"4. division"<<endl;
cout<<"5. exit"<<endl;
cin>>n;

if(n>=1 && n<=4){
  cout<<"enter numbers";
  cin>>a>>b;
}
switch (n)
{
case 1:
    cout<<"add.  :"<<(a+b)<<endl;
    break;
case 2:
    cout<<"sub.   :"<<(a-b)<<endl;
    break;
case 3:
    cout<<"multiply.  :"<<(a*b)<<endl;
    break;
case 4:
   if(b==0) cout<<"invalid operations";
    else cout<<"div  :"<<(a/b)<<endl;
    break;
case 5:
    cout<<"Exiting"<<endl;
    break;
default:
 cout<<"invalid choice"<<endl;
    break;
}


}while(n!=5);



    return 0;
}