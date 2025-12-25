class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        reverse(happiness.begin(),happiness.end());
        long long res=0;
        int count=0;
        for(int i=0;i<k;i++){
        if(happiness[i]-count>0){
            res=res+(happiness[i]-count);
            ++count;
        }
        else{
            break;
        }
        }
        return res;
        
    }
};