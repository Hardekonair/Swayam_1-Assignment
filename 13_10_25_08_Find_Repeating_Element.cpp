#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> ans;

    int i = 0, j = 1;
    while (j < n) {
        bool flag = false;

        // Move j ahead while same numbers repeat
        while (j < n && nums[i] == nums[j]) {
            j++;
            flag = true;
        }

        // If flag true => nums[i] was a duplicate
        if (flag)
            ans.push_back(nums[i]);

        // Move i and j to next unique element
        i = j;
        j++;
    }

    return ans;
}

int main() {
    vector<int> nums = {1, 1, 2, 3, 4, 4, 5, 2};

    vector<int> duplicates = findDuplicates(nums);

    cout << "Repeating elements are: ";
    if (duplicates.empty())
        cout << "None";
    else
        for (int x : duplicates)
            cout << x << " ";

    cout << endl;
    return 0;
}
