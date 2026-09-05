#include <bits/stdc++.h>
using namespace std;
void print7(int n)
{
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        // for star patterns
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "*";
        }
        // for space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < ((2 * n) - 1 - (2 * i)); k++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void print9(int n)
{
    // sidha triangle
    for (int i = 0; i < n; i++)
    {
        // for space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }

        // for star patterns
        for (int k = 0; k < (2 * i + 1); k++)
        {
            cout << "*";
        }
        // for space
        for (int j = 0; j < (n - i - 1); j++)
        {
            cout << " ";
        }
        cout << endl;
    }

    // opposite of triangle
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        for (int k = 0; k < ((2 * n) - 1 - (2 * i)); k++)
        {
            cout << "*";
        }

        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}
void print10(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < ((n - 1) - i); j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void print11(int n)
{
    for (int i = 0; i < n; i++)
    {
        int start = 1;
        if (i % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }

        cout << endl;
    }
}
void print12(int n){
int space= 2*(n-1);
for (int i = 1; i <= n; i++)
{

    //numbers
    for (int j = 1; j <= i; j++)
    {
        cout<<j;
    }


    //spaces
    //in place of 6-2*1 --- 2* (n-1)
    //just after endl use space-=2.

    for (int k = 1; k <= space; k++)
    {
        cout<<" ";
    } 


    //for numbers  
    for (int l = i; l >= 1; l--)
    {
        cout<<l;
    }
    cout<<endl;
    space=space-2;
}



}


int main()
{
    int testc;
    cin >> testc;
    for (int i = 0; i < testc; i++)
    {
        int n;
        cin >> n;
        print12(n);
    }

    return 0;
}