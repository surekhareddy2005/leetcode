class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>maps;
        for(int i=0;i<arr.size();i++){
            maps[arr[i]]++;
        }
        set<int>sets;
        for(auto i: maps){
            sets.insert(i.second);
        }
        if(sets.size()==maps.size())return true;
        return false;
        
    }
};