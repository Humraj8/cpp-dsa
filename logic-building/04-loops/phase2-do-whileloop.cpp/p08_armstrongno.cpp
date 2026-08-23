#include<bits/stdc++.h>
using namespace std;
int main(){
//41.Check Armstrong number.
long long n;
cin>>n;

if(n<0){
    cout<<"the number is not armstrong number";
    return 0;
}

long long temp = n;
long long count=0;



do {
int lastdigit= temp % 10;
temp=temp/10;
count++;
}while(temp>0);

long long semp=n;
long long arm=0;



do 
{
int lastshii= semp % 10;
arm= round(pow(lastshii,count))+arm;
semp= semp /10;

}while(semp>0);



if(arm == n){
    cout<<"the number is armstrong number";
}
else{
    cout<<"the number is not armstrong number";
}


// 1. If n<0 -> not Armstrong, 0 is Armstrong.
// 2. Count digits by repeatedly doing n%10 and n/10.
// 3. Sum each digit^count using round(pow(digit,count)).
// 4. If sum == n -> Armstrong else not.

return 0;
}