#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixMap;
    prefixMap[0] = 1;
    int prefixSum = 0, count = 0;

    for (int num : nums) {
        prefixSum += num;

        if (prefixMap.find(prefixSum - k) != prefixMap.end()) {
            count += prefixMap[prefixSum - k];
        }

        prefixMap[prefixSum]++;
    }

    return count;
}

int main() {
    vector<int> arr = {1, 2, 3};
    int k = 3;
    cout << "Number of subarrays with sum " << k << " is: " << subarraySum(arr, k) << endl;
    return 0;
}
