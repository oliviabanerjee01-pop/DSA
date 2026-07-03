#include <iostream>
#include <vector>
using namespace std;

vector<int> findUnion(vector<int> &arr1, vector<int> &arr2) {
    vector<int> ans;

    int i = 0;
    int j = 0;

    while (i < arr1.size() && j < arr2.size()) {

        if (arr1[i] < arr2[j]) {

            if (ans.empty() || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);
            }
            i++;
        }

        else if (arr2[j] < arr1[i]) {

            if (ans.empty() || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
            }
            j++;
        }

        else {

            if (ans.empty() || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);
            }
            i++;
            j++;
        }
    }

    while (i < arr1.size()) {

        if (ans.empty() || ans.back() != arr1[i]) {
            ans.push_back(arr1[i]);
        }
        i++;
    }

    while (j < arr2.size()) {

        if (ans.empty() || ans.back() != arr2[j]) {
            ans.push_back(arr2[j]);
        }
        j++;
    }

    return ans;
}

int main() {

    vector<int> arr1 = {3, 4, 8, 9};
    vector<int> arr2 = {2, 4, 6, 8};

    vector<int> ans = findUnion(arr1, arr2);

    cout << "Union: ";

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }

    return 0;
}