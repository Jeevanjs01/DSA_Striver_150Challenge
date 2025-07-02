#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) {
    if (n == 0)
        return 0;

    int j = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter sorted elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int k = removeDuplicates(arr, n);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "New length k: " << k << endl;

    return 0;
}
