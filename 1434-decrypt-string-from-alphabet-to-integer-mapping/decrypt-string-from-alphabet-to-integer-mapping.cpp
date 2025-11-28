class Solution {
public:
    string freqAlphabets(string s) {
       int i=0;
       string res="";
       while(i<s.size()){
        if(i+2<s.size() && s[i+2]=='#'){
            string t;
            t+=s[i];
          t+=s[i+1];
            int l=stoi(t);
            cout<<l<<" ";
            char k='a'+l-1;
            res+=k;
            i+=3;
            
        }
        else{
         int l=s[i]-'0';
         char k='a'+l-1;
         res+=k;
         i++;
        }
       }
       return res;
        
    }
};