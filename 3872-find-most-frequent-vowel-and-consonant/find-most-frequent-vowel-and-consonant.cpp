class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>v;
        for(int i=0;i<s.size();i++){
            v[s[i]]++;
        }
        int ccount=0;
        int vcount=0;
        for(auto i : v){
            if(i.first=='a' || i.first=='e' || i.first=='i' || i.first=='o' || i.first=='u'){
                vcount=max(vcount,i.second);
            }
            else{
                ccount=max(ccount,i.second);
            }
        }
      return ccount+vcount;
        
    }
};