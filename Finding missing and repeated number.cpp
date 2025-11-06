class Solution{
    public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
        vector<int>result;;
        int missingValue;
        int repeatValue;
        int expsum=0;
        int actualsum=0;

        unordered_set<int>st;

        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid.size();j++){
                actualsum+=grid[i][j];
                if(st.find(grid[i][j])!=st.end()){
                    repeatValue=grid[i][j];
                    result.push_back(repeatValue);
                }
                st.insert(grid[i][j]);
            }
        }
        int n=grid.size();
        expsum=(n*n)*(n*n+1)/2;
        missingValue=expsum-actualsum+repeatValue;
        result.push_back(missingValue);
        return result;
    }
}