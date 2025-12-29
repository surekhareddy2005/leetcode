class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        int low=0;
        int high=m*n-1;
        int i,j;
        while(low<=high){
            int mid=(low+high)/2;
            i=mid/n;
            j=mid%n;


            cout << matrix[i][j] << endl;
            if(matrix[i][j]==target)return true;
            else if(matrix[i][j]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }


            
        }
    
    return false;
    }
};