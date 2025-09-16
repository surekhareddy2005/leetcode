class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int>temp;
        int cnt=0;
        for(int i=0;i<text.size();i++){
            if(text[i]!=' '){
            temp[text[i]]++;
            }
             if(text[i]==' ' || i==text.size()-1){
                bool flag=false;
                for(int j=0;j<brokenLetters.size();j++){
                if(temp[brokenLetters[j]]>=1){
                    cout<<brokenLetters[j];
                    flag=true;
                    break;
                }
                }
                if(flag==false) cnt++;
                temp.clear();
                cout<<temp.size();
               
                
            }

        }
        return cnt;
      
    }
};