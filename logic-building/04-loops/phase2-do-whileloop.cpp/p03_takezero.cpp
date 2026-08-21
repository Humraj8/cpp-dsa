#include<bits/stdc++.h>
using namespace std;
int main(){
//36. Take input until 0 is entered and print sum.

long long sum=0;
int i;
do {

cin>>i;
sum=sum+i;

}while(i!=0);

cout<<sum<<endl;
    return 0;
}