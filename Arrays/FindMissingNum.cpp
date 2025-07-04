#include <iostream>
#include <vector>
using namespace std;

int findMissingNumber(vector<int>& arr, int n) {
    int totalSum = n * (n + 1) / 2;
    int currentSum = 0;

    for (int num : arr) {
        currentSum += num;
    }

    return totalSum - currentSum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5, 6};
    int n = 6;

    int missing = findMissingNumber(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
