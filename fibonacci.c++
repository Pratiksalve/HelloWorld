#include <iostream>
using namespace std;

void generateFibonacci(int n) {
    int first = 0, second = 1;
    cout << "Fibonacci Series (" << n << " terms): ";

    if (n >= 1) {
        cout << first;
    }

    if (n >= 2) {
        cout << ", " << second;
    }

    for (int i = 3; i <= n; ++i) {
        int next = first + second;
        cout << ", " << next;
        first = second;
        second = next;
    }

    cout << endl;
}

int main() {
    int numTerms;

    cout << "Enter the number of Fibonacci terms to generate: ";
    cin >> numTerms;

    if (numTerms < 1) {
        cout << "Please enter a valid number of terms (1 or more)." << endl;
    } else {
        generateFibonacci(numTerms);
    }

    return 0;
}
