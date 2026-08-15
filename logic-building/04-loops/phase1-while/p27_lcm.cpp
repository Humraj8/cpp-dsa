#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b;
cin>>a>>b;

//step 1 adjusting if there is integer i,e from negative to positive
if (a < 0)
a = -a;

if (b  < 0)
 b = -b;

int tempa=a;
int tempb=b;

if (tempa == 0 && tempb == 0){
    cout<<"not defined";
    return 0;
}

if (tempa == 0 || tempb == 0){
    cout<<0;
    return 0;
}


if(tempb>tempa)
swap(tempa,tempb);

while(tempb>0){
    int remainder = tempa % tempb;
    if(remainder == 0){


        cout<<"the lcm is :"<< ( (a * b) / tempb) <<endl;
        return 0;
    }
    tempa = tempb;
    tempb = remainder;


}

return 0;
}