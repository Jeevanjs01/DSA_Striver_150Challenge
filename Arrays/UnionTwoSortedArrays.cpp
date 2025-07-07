#include <iostream>
#include <vector>
using namespace std;
vector<int> findUnion(vector<int>& arr1, vector<int>& arr2) {
    int n = arr1.size() , m = arr2.size();
    vector<int> result;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j]) {
            if (result.empty() || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++;
        }else if (arr2[j] < arr1[i]) {
            if (result.empty() || result.back() != arr2[j])
                result.push_back(arr2[j]);
            j++;
        }else {
            if (result.empty() || result.back() != arr1[i])
                result.push_back(arr1[i]);
            i++, j++;
        }
    }while (i < n) {
        if (result.empty() || result.back() != arr1[i])
            result.push_back(arr1[i]);
        i++;
    }while (j < m) {
        if (result.empty() || result.back() != arr2[j])
            result.push_back(arr2[j]);
        j++;
    }
    return result;
}

int main() {
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6};

    vector<int> uni = findUnion(arr1, arr2);
    cout << "Union: ";
    for (int num : uni) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
