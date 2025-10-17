// 1480. Running Sum of 1d Array
// Problem Statement:-
//   Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).
//   Return the running sum of nums.
// ****************************************************************************************************************************************************************************************************
    vector<int> runningSum(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans;
        int val=0;

        for(int i=0;i<n;i++){
            val+=nums[i];
            ans.push_back(val);
        }
        return ans;
        
    }
