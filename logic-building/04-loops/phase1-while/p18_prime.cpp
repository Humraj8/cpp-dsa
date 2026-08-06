#include <iostream>
using namespace std;

int main() {
    // Phase 1 - Problem 18: Check whether the given number is a prime number.
    int n;
    cin >> n;

    // ====================================================
    // STEP 1: EDGE CASE SHIELD
    // Numbers <= 1 (0, 1, negatives) are defined as not prime.
    // ====================================================
    if (n <= 1) {
        cout << "Not a prime number" << endl;
        return 0; // Exit program early
    }

    // ====================================================
    // STEP 2: SETUP COUNTER & LOOP ENGINE
    // count = keeps track of factors found between 2 and n - 1
    // i = 2   = start checking from 2 (skipping 1)
    // ====================================================
    int count = 0; 
    int i = 2;     

    // ====================================================
    // STEP 3: RUN THE LOOP (From 2 up to n - 1)
    // ====================================================
    while (i < n) {
        // Check if current 'i' divides 'n' perfectly
        if (n % i == 0) {
            count++; // Found a factor! Increase our counter.
        }
        i++; // Move to the next number
    }

    // ====================================================
    // STEP 4: INSPECT THE COUNTER
    // ====================================================
    if (count == 0) {
        // Zero factors were found between 2 and n - 1
        cout << "Prime number" << endl;
    } else {
        // At least one factor was found
        cout << "Not a prime number" << endl;
    }

    return 0;
}