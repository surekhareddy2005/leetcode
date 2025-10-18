class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l=0;
        int r=0;
        int maxlength=0;
        vector<int>matrix(256,-1);
        while(r<s.size()){
            if(matrix[s[r]]!=-1){
                if(l<=matrix[s[r]]){
                    l=matrix[s[r]]+1;
                }
            }
            int len=r-l+1;
            maxlength=max(maxlength,len);
            matrix[s[r]]=r;
            r++;

        }
        return maxlength;
        
    }
};