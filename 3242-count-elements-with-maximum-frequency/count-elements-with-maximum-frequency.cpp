class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<int>r;
        for(auto i: m){
            r.push_back(i.second);
        }
        sort(r.begin(),r.end());
        reverse(r.begin(),r.end());
        int maxs=r[0];
        int sum=0;
        for(int i=0;i<r.size();i++){
            if(maxs==r[i])
            sum+=maxs;
            else
            break;
        }
        return sum;
        
    }
};