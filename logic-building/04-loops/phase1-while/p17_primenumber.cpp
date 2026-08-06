#include <bits/stdc++.h>
using namespace std;

int main() {
    // Phase 1 - Problem 17: Print all prime numbers between 1 and 100

    // ====================================================
    // OUTER LOOP: Generates candidate numbers from 2 to 100
    // ====================================================
    int num = 2; 

    while (num <= 100) {
        
        // ================================================
        // RESET FOR EACH NUMBER
        // 'count' MUST start at 0 for every new candidate!
        // ================================================
        int count = 0;
        int i = 2;

        // ================================================
        // INNER LOOP: Checks if current 'num' is prime
        // ================================================
        while (i < num) {
            if (num % i == 0) {
                count++; // Found a factor
            }
            i++;
        }

        // ================================================
        // PRINT IF PRIME
        // ================================================
        if (count == 0) {
            cout << num << " ";
        }

        num++; // Move to the next candidate number (e.g. 2 -> 3)
    }

    cout << endl;
    return 0;
}