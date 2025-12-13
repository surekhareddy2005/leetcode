class Solution {
public:
bool isvalid(string s){
    if(s=="")return false;
       int n=0;
       int a=0;
       int u=0;
       for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9')n++;
        else if((s[i]>='a' && s[i]<='z' )|| (s[i]>='A' && s[i]<='Z')) a++;
        else if(s[i]=='_')u++;
       }
       if(n+a+u==s.size())return true;
       return false;
}
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        vector<string>ele;
        vector<string>gro;
        vector<string>pha;
        vector<string>res;
        for(int i=0;i<code.size();i++){
            if(isvalid(code[i]) && isActive[i]){
                cout<<code[i]<<" ";
                if(businessLine[i]=="electronics"){
                    ele.push_back(code[i]);
                }
               else if(businessLine[i]=="grocery"){
                    gro.push_back(code[i]);
                }
              else  if(businessLine[i]=="pharmacy"){
                    pha.push_back(code[i]);
                }
                else if (businessLine[i]=="restaurant"){
                    res.push_back(code[i]);
                }

            }
        }
        sort(ele.begin(),ele.end());
        sort(gro.begin(),gro.end());
        sort(pha.begin(),pha.end());
        sort(res.begin(),res.end());
        ele.insert(ele.end(),gro.begin(),gro.end());
        ele.insert(ele.end(),pha.begin(),pha.end());
        ele.insert(ele.end(),res.begin(),res.end());

        for(int i=0;i<ele.size();i++){
            cout<<ele[i]<<" ";
        }
        return ele;
        
    }
};