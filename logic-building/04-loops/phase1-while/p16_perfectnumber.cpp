#include<bits/stdc++.h>
using namespace std;
int main(){
//16. Check whether the given number is a Perfect number.
int n;
cin>>n;
int temp=n;
long long store;

if(temp>1){
    temp = temp-1;

store = pow(2,temp) % n;

return 0;
}

if(store == 1){
    cout<<"prime number";
}
else{
    cout<<"non prime";
}

/* this shit wrong or approach is wrong becuase what i tried to use
 Euclid-Euler formula, 2^{n-1}(2^n - 1). where it states that---this formula guarantees that whenever the Mersenne term (2^n - 1) is certified as a prime number, multiplying it by the preceding power of two, (2^{n-1}), will instantly generate a flawless, even perfect number.

2^{p-1}(2^p - 1) means if second part is prime numnber and we multiply with first part we must get n and to note that before finding prime number of second part the p must be prime .

so it is very hectic to find all so i while searching found out that there is another way to fing perfect number by ---sum of all perect divisor if equals to input(n) then the number is perfect number---

which is done in p16_perfectcopy.cpp check there the main solutions
*/
    return 0;
}