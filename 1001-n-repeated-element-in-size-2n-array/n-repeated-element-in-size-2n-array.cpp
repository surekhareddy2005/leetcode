class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int>maps;
        for(int i=0;i<nums.size();i++){
            maps[nums[i]]++;
        }
        int n=nums.size()/2;
        for(auto i : maps){
            if(i.second==n)
            return i.first;
        }
        return -1;
        
    }
};