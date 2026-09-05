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
int main()
{
    int testc;
    cin >> testc;
    for (int i = 0; i < testc; i++)
    {
        int n;
        cin >> n;
        print11(n);
    }

    return 0;
}