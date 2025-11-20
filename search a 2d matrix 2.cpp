class Solution{
    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int column=matrix[0].size();

        int startRow=0;
        int startColumn=column-1;

        while(startRow<row && startColumn>=0){
            if(matrix[startRow][startColumn]==target){
                return true;
            }
            else if(matrix[startRow][startColumn]<target){
                startRow++;
            }
            else{
                startColumn--;
            }
        }
        return false;
    }
}