#include <iostream>
using namespace std;

    void ShiftArrayByK(int arr[], int size, int k) {
        int temp[k];
        for (int i = 0; i < k; i++) {
            temp[i] = arr[size - k + i];
        }

        for (int i = size - 1; i >= k; i--) {
            arr[i] = arr[i - k];
        }

        for (int i = 0; i < k; i++) {
            arr[i] = temp[i];
        }
};

int main() {
    int n, k;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter k (number of positions to rotate): ";
    cin >> k;

    ShiftArrayByK(arr, n, k);

    cout << "Array after rotating by " << k << " positions to the right: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

