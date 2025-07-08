#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int longestSubarrayWithSumK(vector<int>& nums, int k) {
    unordered_map<int, int> prefixMap;
    prefixMap[0] = -1; // Important for sum exactly at start
    int prefixSum = 0, maxLen = 0;

    for (int i = 0; i < nums.size(); i++) {
        prefixSum += nums[i];

        if (prefixMap.find(prefixSum - k) != prefixMap.end()) {
            maxLen = max(maxLen, i - prefixMap[prefixSum - k]);
        }

        if (prefixMap.find(prefixSum) == prefixMap.end()) {
            prefixMap[prefixSum] = i;
        }
    }
    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 3, -2, 5};
    int k = 5;
    cout << "Longest subarray length with sum " << k << " is: " << longestSubarrayWithSumK(arr, k) << endl;
    return 0;
}
