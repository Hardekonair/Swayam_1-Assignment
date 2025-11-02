    int maxSubArray(vector<int>& nums) {
                           // OPTIMAL SOLUTION
        int maxsum=INT_MIN;
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            maxsum=max(sum,maxsum);
            if(sum<0)
                sum=0;
        }
        return maxsum;

                              // better solution

        // int n=nums.size();
        // int maxsum=INT_MIN;
        // for(int i=0;i<n;i++){
        //     int sum=0;
        //     for(int j=i;j<n;j++){
        //         sum+=nums[j];
        //         if(sum>maxsum)
        //              maxsum=sum;
        //     }
        // }
        // return maxsum;


    }
