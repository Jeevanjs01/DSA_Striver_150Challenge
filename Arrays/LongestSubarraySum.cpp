#include <iostream>
#include <vector>
using namespace std;

int longestSubarrayWithSumK(vector<int>& nums, int k) {
    int left = 0, right = 0, currentSum = 0, maxLen = 0;
    int n = nums.size();

    while (right < n) {
        currentSum += nums[right];

        while (currentSum > k && left <= right) {
            currentSum -= nums[left];
            left++;
        }

        if (currentSum == k) {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
    }
    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 1, 1, 1, 1, 2};
    int k = 4;

    cout << "Longest subarray length with sum " << k << " is: " << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}
