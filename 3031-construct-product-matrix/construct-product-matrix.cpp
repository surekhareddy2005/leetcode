class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
      vector<long long>prefix;
      vector<long long>suffix;
      vector<vector<int>>result(grid.size(),vector<int>(grid[0].size()));
       long long product=1;
       for(int i=0;i<grid.size();i++){
        for(int j=0;j<grid[i].size();j++){
           product=(product*grid[i][j])%12345;
           prefix.push_back(product);
        }
       }
       product=1;
         for(int i=grid.size()-1;i>=0;i--){
        for(int j=grid[i].size()-1;j>=0;j--){
           product=(product*grid[i][j])%12345;
           suffix.push_back(product);
        }
       }
       reverse(suffix.begin(),suffix.end());
       int j=0;
      for(int i=0;i<grid.size();i++){
        for(int k=0;k<grid[i].size();k++){
            if(j==0){
                result[i][k]=suffix[j+1];
                j++;
            }
            else if(j==prefix.size()-1){
                result[i][k]=prefix[j-1];
                j++;
            }
            else{
                result[i][k]=suffix[j+1]*prefix[j-1]%12345;
                j++;
            }
        }
      }
       return result;
    }
};