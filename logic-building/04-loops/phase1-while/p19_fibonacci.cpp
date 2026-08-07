#include <iostream>
using namespace std;

int main() {
    //19. Print the Fibonacci series up to n terms.
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    // EDGE CASE: Handle negative input or zero
    if (n <= 0) {
        cout << "Please enter a number greater than 0." << endl;
        return 0;
    }

    int first = 0, second = 1, next;
    int i = 1; // Loop counter

    cout << "Fibonacci Series: " << endl;

    while (i <= n) {
        cout << first << " " << endl;
        
        next = first + second;
        first = second;
        second = next;
        
        i++; // Increment counter to prevent infinite loop
    }

    cout << endl;
    return 0;
}
