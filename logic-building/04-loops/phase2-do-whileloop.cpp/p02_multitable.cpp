#include<bits/stdc++.h>
using namespace std;
int main(){
//35. Print multiplication table of a number.
int n;
cin>>n;
int i=1;
do {


cout<< n << "x" << i<< " = " << (n * i)<<endl;
i++;

}while(i<=10);


    return 0;
}