#include <iostream>
using namespace std;

//to reverse a number
int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }
    return reversed;
}

//to check palindrome
bool isPalindrome(int num) {
    int reversed = reverseNumber(num);
    return num == reversed;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a Palindrome." << endl;
    } else {
        cout << num << " is NOT a Palindrome." << endl;
    }

    return 0;
}
