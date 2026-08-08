#include<bits/stdc++.h>
using namespace std;
int main() {
    // Find and print the sum of the Fibonacci series up to n terms

    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

   long long first = 0, second = 1, next;
    int i = 1; 
    long long sum = 0; // 1. Variable to store the running total

    if (n <= 0) {
        cout << "Please enter a positive integer greater than 0." << endl;
    } else {
        cout << "Fibonacci Series: ";
        while (i <= n) {
            cout << first << " ";
            
            sum += first; // 2. Add the current term to the total sum
            
            next = first + second;
            first = second;
            second = next;
            i++;
        }
        cout << endl;
        
        // 3. Print the final calculated sum
        cout << "Sum of the series: " << sum << endl; 
    }

    return 0;
}

