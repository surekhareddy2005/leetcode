class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
          vector<int>result;
          unordered_map<int,int>map;
          for(int i=0;i<nums.size();i++){
            map[nums[i]]++;
          }
          for(auto i :map){
            if(i.second>1)
            result.push_back(i.first);
          }
          return result;
        
    }
};