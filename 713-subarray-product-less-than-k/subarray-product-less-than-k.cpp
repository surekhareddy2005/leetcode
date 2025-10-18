class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k<=1) return 0;
        int left=0;
        int right=0;
        int product=1;
        int count=0;
        while(right<nums.size()){
          product*=nums[right];
          if(product<k){
            count+=(right-left)+1;
            cout<<count<<" ";
            right++;
          }
          else{
            while(product>=k && left<right){
                product=(product)/nums[left];
                left++;
            }
            cout<<"\n"<<left<<" "<<right<<endl;
            if(right!=left)
            count+=(right-left)+1;
            if(right==left && nums[right]<k){
                count+=1;
            }
            cout<<count<<" ";
            right++;
          }

        }
        return count;
        
    }
};