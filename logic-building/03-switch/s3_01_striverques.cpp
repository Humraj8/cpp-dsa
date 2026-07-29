#include<bits/stdc++.h>
using namespace std;
int main(){
    /*take the day no and print the corresponding dat 
    for 1 print monday 
    for 2 print tuesday and so on for 7 print sunday .*/
    int day;
    cin>>day;
    switch (day)
    {
    case 1:
        cout <<"monday";
        break;
    case 2:
        cout <<"tuesday";
        break;
    case 3:
        cout <<"wednesday";
        break;
    case 4:
        cout <<"thursday";
        break;
    case 5:
        cout <<"friday";
        break;
    case 6:
        cout <<"saturday";
        break;
    case 7:
        cout <<"sunday";
        break;
    
    default:
    cout<<"invalid number";
        break;
    }

cout<<"check";
    return 0;
}