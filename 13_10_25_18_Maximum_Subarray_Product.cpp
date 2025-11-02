    int maxProduct(vector<int>& nums) {
                                     // OPTIMAL APPROACH
        int prefix=1,suffix=1,ans=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if (prefix==0)
                prefix=1;
            if(suffix==0)
                suffix=1;

            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            ans=max(ans,max(prefix,suffix));

        }
        return ans;
        
                                     // OPTIMAL APPROACH
        // int n=nums.size();
        // int prepro=1,postpro=1;
        // int maxi=INT_MIN;
        // for(int i=0;i<n;i++){
        //     prepro=prepro*nums[i];
        //     maxi=max(prepro,maxi);
        //     if(prepro==0)
        //         prepro=1;

        //     postpro=postpro*nums[n-i-1];
        //     maxi=max(postpro,maxi);
            
        //     if(postpro==0)
        //         postpro=1;
        // }
        // return maxi;
                                     // BRUTE FORCE
        // int n=nums.size();
        // int maxi=INT_MIN;
        // for(int i=0;i<n;i++){
        //     int pro=1;
        //     for(int j=i;j<n;j++){
        //         pro*=nums[j];
        //         maxi=max(maxi,pro);
        //     }
        // }
        // return maxi;
        
    }
