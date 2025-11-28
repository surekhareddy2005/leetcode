class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
       vector<int>r(26,0);
       for(int i=0;i<s.size();i++){
        int l=s[i]-'a';
        ++r[l];
       }
       vector<int>u(26,0);
       for(int i=0;i<t.size();i++){
        int l=t[i]-'a';
        ++u[l];

         }
         for(int i=0;i<r.size();i++){
            cout<<i<<u[i]<<"\n";
         }
       for(int i=0;i<r.size();i++){
        if(r[i]!=u[i])return false;
       }
       return true;
    }
};