#include <iostream>
#include <climits>
using namespace std;


int findLargest(int arr[], int n) {
    int largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = findLargest(arr, n);
    cout << "Largest element is: " << largest << endl;

    return 0;
}
