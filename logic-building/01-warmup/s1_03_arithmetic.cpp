#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;

    cout << "summ of 2 number is: " << (x + y)
         << "\n";
    cout << "differnce of 2 number is: " << (x - y)
         << "\n";
    cout << "multiplication of 2 number is: " << (x * y)
         << "\n";
    cout << "divison of 2 number is: " << ((float)x / y)
         << "\n";
    return 0;
}
/* here the things to note down is

1)first when we initialize the variable and took the variable in cin,then we didnot take like a varible and dump the operations there (int sum=x +y) because it takes space and we are following optimal part

2)
and we do operations inside cout and we put bracket outside because c++ takes + and << (as << has higher precedence than +)all as a operator so giving bracket we define to do the calculation first 

3) aslo thing to note that for * it works perfectly fine as it has higher precedence, but it is better prefernce to write all in bracket to avoid confusion


*/