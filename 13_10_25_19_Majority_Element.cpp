    int majorityElement(vector<int>& nums) {
                                //OPTIMAL APPROACH
        int n=nums.size();
        int count=0;
        int el;
        for(int i=0;i<n;i++){
            if(count==0){
                el=nums[i];
                count=1;
            }
            else if(nums[i]==el){
                count++;
            }
            else
                count--;
        }
        int count2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==el)
                count2++;
        }
        if(count2>n/2)
            return el;
        return -1;
        
        
        
                                   //BETTER SOLUTION
        // map<int,int> ans;
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     ans[nums[i]]++;
        // }
        // for(auto it:ans){
        //     if(it.second>(n/2))
        //         return it.first;
        // }
        // return -1;
       
                                    //BRUTE FORCE
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     int count=0;
        //     for(int j=0;j<n;j++){
        //         if(nums[i]==nums[j])
        //             count++;
        //     }
        //     if(count>(n/2))
        //         return nums[i];
        // }
        // return -1;
    }
