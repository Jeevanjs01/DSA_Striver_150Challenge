#include <iostream>
using namespace std;


void printDivisors(int n) {
    cout << "Divisors of " << n << " are: ";
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printDivisors(num);

    return 0;
}
