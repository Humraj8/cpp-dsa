#include<bits/stdc++.h>
using namespace std;
int main(){
//Find HCF of two numbers.

int n,m;
cin>>n>>m;

int small = n;
int lar =m;



//this for converting negative integer to positive integer
if(small <0 )
  small = -small;

if(lar <0)
  lar= -lar;

  
//for both integers zero 
if(small ==0 && lar ==0){
   cout<<"not defined";
   return 0;
}

//if one integer is zero another is not
if(small == 0 ){
 cout<< lar<<endl;
 return 0;

}
else if(lar ==0 ){
    cout<<small<<endl;
    return 0;
}



//this we swapp so we always divide large number by small number 
if(small>lar){
swap(small,lar);
}

//main cooking
while(small>0){

int remainder=lar % small;
if(remainder == 0){
cout<<"the hcf is "<<small<<endl;
return 0;
}


lar = small;
small = remainder;

}

return 0;
}