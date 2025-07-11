#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool hasPairWithSum(vector<int>& nums, int k) {
    unordered_set<int> seen;

    for (int num : nums) {
        if (seen.find(k - num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int k = 16;
    if (hasPairWithSum(arr, k))
        cout << "Pair with sum " << k << " exists.\n";
    else
        cout << "No pair with sum " << k << " found.\n";

    return 0;
}
#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

bool hasPairWithSum(vector<int>& nums, int k) {
    unordered_set<int> seen;

    for (int num : nums) {
        if (seen.find(k - num) != seen.end()) {
            return true;
        }
        seen.insert(num);
    }
    return false;
}

int main() {
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int k = 16;
    if (hasPairWithSum(arr, k))
        cout << "Pair with sum " << k << " exists.\n";
    else
        cout << "No pair with sum " << k << " found.\n";

    return 0;
}
