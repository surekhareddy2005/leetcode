class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int total=0;
        for(int i=0;i<apple.size();i++){
            total+=apple[i];
        }
        cout<<total;
        sort(capacity.begin(),capacity.end());
        reverse(capacity.begin(),capacity.end());
        int i=0;
        int count=0;
        while(i<capacity.size()){
            if(total>=capacity[i]){
                count++;
                total=total-capacity[i];
                i++;
            }
            else if(total>0 && total<capacity[i]){
                count++;
                break;
              
            }
            else if(total<=0) break;

        }
        return count;
        
    }
};