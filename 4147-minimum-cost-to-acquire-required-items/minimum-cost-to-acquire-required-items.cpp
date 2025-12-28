class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        int a=cost1+cost2;
        long long result;
        int maxs;
        if(a>costBoth){
            maxs=max(need1,need2);
            result= 1LL *costBoth*maxs;
            
        }
        else{
            long long k=1LL * cost1*need1;
            long long j=1LL * cost2*need2;
          
            result= k+j;
        }
        int remain;
        long long cost;
        long long tcost;
        
        if(need1>need2){
            remain=need1-need2;
            cost=1LL *cost1*remain;
            tcost=1LL *need2*costBoth;
            tcost+=cost;
            
        }
        else{
            remain=need2-need1;
            cost= 1LL *cost2*remain;
            tcost= 1LL * need1*costBoth;
            tcost+=cost;
        }
        if(tcost>result)
            return result;
        return tcost;
        
        

    }
};