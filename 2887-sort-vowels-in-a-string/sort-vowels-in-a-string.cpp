class Solution {
public:
    string sortVowels(string s) {
        vector<char>temp;
        for(int i=0;i<s.size();i++){
            char k=tolower(s[i]);
            if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u'){
                temp.push_back(s[i]);
            }
        }
        int j=0;
        sort(temp.begin(),temp.end());
        for(int i=0;i<s.size();i++){
            int k=tolower(s[i]);
             if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u'){
                s[i]=temp[j];
            
                j++;
            }
            
        }

        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<" ";
        }
        return s;
        
    }
};