#include <bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& nums) {
    int totalSum = accumulate(nums.begin(), nums.end(), 0);
    int leftSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        int rightSum = totalSum - leftSum - nums[i];
        if (leftSum == rightSum)
            return i; // Pivot found
        leftSum += nums[i];
    }

    return -1; // No pivot found
}

int main() {
    vector<int> nums = {1, 7, 3, 6, 5, 6};
    int index = pivotIndex(nums);

    if (index != -1)
        cout << "Pivot element: " << nums[index] << endl;
    else
        cout << "No Pivot element found." << endl;

    return 0;
}
