class Solution {
public:
    string customSortString(string order, string s) {
        vector<int>maps(26,0);
        for(int i=0;i<s.size();i++){
            maps[s[i]-'a']++;
        }
        string rs="";
        for(int i=0;i<order.size();i++){
            while(maps[order[i]-'a']>0){
                rs+=order[i];
                maps[order[i]-'a']--;
            }
        }
        for(int i=0;i<26;i++){
            while(maps[i]>0){
                char c='a'+i;
                rs+=c;
                maps[i]--;

            }
        }
        return rs;
    }
};