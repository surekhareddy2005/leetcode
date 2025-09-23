class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int p=1;
        int maxs=INT_MIN;
        for(int i=0;i<nums.size();i++){
         p*=nums[i];
         maxs=max(maxs,p);
          if(nums[i]==0){
            p=1;
         }
        }
        cout<<maxs<<" ";

         int s=1;
         int maxs1=INT_MIN;

         for(int i=nums.size()-1;i>=0;i--){
            s*=nums[i];
            maxs1=max(maxs1,s);
            if(nums[i]==0){
             s=1;
            }

         }
         cout<<maxs1;
    //   int maxsr;
        return max(maxs1,maxs);
        // return maxsr;
        
    }
};