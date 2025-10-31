#include <iostream>
#include <vector>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) return 0;

    int i = 0;  // pointer for unique elements
    for (int j = 1; j < nums.size(); j++) {
        if (nums[j] != nums[i]) {  
            i++;                   // move unique pointer
            nums[i] = nums[j];     // copy next unique element
        }
    }
    return i + 1;  // new length of array with unique elements
}

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
    int k = removeDuplicates(nums);

    cout << "New length = " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
