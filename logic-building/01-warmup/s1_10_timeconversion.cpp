#include<bits/stdc++.h>
using namespace std;
int main(){
 // Write a program to read seconds and convert them into hours, minutes and seconds.
int total_seconds;
cin>>total_seconds;
cout<<"the conversion from seconds to hours ,minute ,seconds is : "<< ( total_seconds / 3600)<< " hours"<<endl;
int remaining_seconds= (total_seconds % 3600);

cout<<( remaining_seconds / 60 )<< "minute "<<endl;

int final_seconds=(remaining_seconds % 60);
cout<< final_seconds << "seconds" <<endl;

return 0;
}