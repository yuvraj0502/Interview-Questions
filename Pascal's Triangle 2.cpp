class Solution{
    public:
    vector<vector<int>>PascalTriangle(int &row){
        vector<vector<int>>result(row+1);

        for(int i=0;i<=row;i++){
            result[i].resize(i+1);
            result[i][0]=result[i][i]=1;

            for(int j=1;j<i;j++){
                result[i][j]=result[i-1][j-1]+result[i-1][j];
            }
        }
        return result;
    }

    vector<int>getRow(int rowIndex){
        vector<vector<int>>result=PascalTriangle(rowIndex);
        return result[rowIndex];
    }
};