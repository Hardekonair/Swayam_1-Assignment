// 3005. Count Elements With Maximum Frequency
// Problem Statement:-
//   You are given an array nums consisting of positive integers.
//   Return the total frequencies of elements in nums such that those elements all have the maximum frequency.
//   The frequency of an element is the number of occurrences of that element in the array.
// ********************************************************************************************************************************************************************************************************

      int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(auto it:nums){
            mpp[it]++;
        }

        int maxi=0;
        for(auto it:mpp){
            if(it.second>maxi)
                maxi=it.second;
        }
        int ans=0;
        for(auto it:mpp){
            if(it.second==maxi)
                ans+=maxi;
        }
        return ans;
    }
