#include <iostream>
#include <vector>
using namespace std;

int findSingleNumber(vector<int>& nums) {
    int ans = 0;
    for (int num : nums) {
        ans ^= num;
    }
    return ans;
}

int main() {
    vector<int> arr = {2, 3, 5, 4, 5, 3, 4};
    cout << "Number that appears once: " << findSingleNumber(arr) << endl;
    return 0;
}
