class Solution{
    public:
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        int rowstart=0;
        int rowend=matrix.size()-1;
        int columnstart=0;
        int columnend=matrix[0].size()-1;


        vector<int>result;

        while(rowstart<=rowend && columnstart<=columnend){
            for(int i=columnstart;i<=columnend;i++){
                result.push_back(matrix[rowstart][i]);
            }
            rowstart++;

            for(int i=rowstart;i<rowend;i++){
                result.push_back(matrix[i][columnend]);
            }
            columnend--;

            for(int i=columnend;i>=columnstart;i--){
                result.push_back(matrix[rowend][i]);
            }
            rowend--;

            for(int i=rowend;i>=rowstart;i--){
                result.push_back(matrix[i][columnstart]);
            }
            columnstart;
        }
    }
    return result;
}