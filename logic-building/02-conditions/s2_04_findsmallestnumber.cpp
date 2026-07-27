#include<bits/stdc++.h>
using namespace std;
int main(){
// ⁠Write a program to read three numbers and find the smallest among them.
float n1,n2,n3;
cin>>n1>>n2>>n3;
if (n1<=n2 && n1<=n3){
cout<<"n1 is smallest";

}
else if(n2<=n1 && n2<=n3){

cout<<"n2 is smallest";

}

else{

cout<<"n3 is smallest";

}


return 0;
}