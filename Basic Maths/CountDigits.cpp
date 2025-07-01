#include<stdio.h>
#include<limits.h>
#include<iostream>
using namespace std;

int countDigits(int n) {
    int counter = 0;
    while (n != 0) {
        n = n / 10;
        counter++;
    }
    return counter;
}


int main() {

    int num;
    cout << "Enter a number: ";
    cin >> num;

    int digits = countDigits(num);
    cout << "Number of digits: " << digits << endl;

    return 0;

}
