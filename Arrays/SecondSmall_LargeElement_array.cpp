#include <iostream>
#include <climits>
using namespace std;

void findSecondSmallestAndLargest(int arr[], int n) {
    if (n < 2) {
        cout << "Array should have at least two elements." << endl;
        return;
    }

    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {

        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    if (secondSmallest == INT_MAX)
        cout << "No second smallest element." << endl;
    else
        cout << "Second smallest element: " << secondSmallest << endl;

    if (secondLargest == INT_MIN)
        cout << "No second largest element." << endl;
    else
        cout << "Second largest element: " << secondLargest << endl;
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
    findSecondSmallestAndLargest(arr, n);
    return 0;
}
