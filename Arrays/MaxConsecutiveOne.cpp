#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0, maxCount = 0;
    for (int num : nums) {
        if (num == 1) {
            count++;
            if (count > maxCount)
                maxCount = count;
        } else {
            count = 0;
        }
    }
    return maxCount;
}

int main() {
    vector<int> arr = {1, 1, 0, 1, 1, 1};
    cout << "Max consecutive 1's: " << findMaxConsecutiveOnes(arr) << endl;
    return 0;
}
