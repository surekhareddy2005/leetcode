class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        vector<long long>sum(prices.size(),0);
       sum[0]=1;
        for(int i=1;i<prices.size();i++){
            if(prices[i-1]-prices[i]==1){
               sum[i]=sum[i-1]+1;
            }
            else{
                sum[i]=1;
            }
        }
        long long s=0;
        for(int i=0;i<sum.size();i++){
            s+=sum[i];
        }
        return s;
        
    }
};