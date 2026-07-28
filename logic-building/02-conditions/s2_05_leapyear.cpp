#include<bits/stdc++.h>
using namespace std;
int main()
{
int year;
cin>>year;

if(  year % 4 == 0 && year % 400 == 0 && year % 100 == 0){
    cout<<"the year is leap year";
}
 else if (year % 4 == 0 && year % 100 != 0){

    cout<<"the year is leap year";
 }
else{
    cout<<"the year is not leap year";
}

return 0;


/* there are three situations in leap year
1) it should be divisible by alll 4,400,and 100 then called leap year
2)it should divisible by 4 but not divisible by 100 called leap year 
3)all remaining are not leap year

*/

}


