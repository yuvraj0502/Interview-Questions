class Solution{
    public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size();
        int column=matrix[0].size();

        int startRow=0;
        int endRow=row-1;

        while(startRow<=endRow){
            int midRow=startRow+(endRow-startRow)/2;
            if(matrix[midRow][0]<=target && matrix[midRow][column-1]>=target){
                int startCol=0;
                int endCol=column-1;
                while(startCol<=endCol){
                    int midCol=startCol+(endCol-startCol)/2;
                    if(matrix[midRow][midCol]==target){
                        return true;
                    }
                    else if(matrix[midRow][midCol]<target){
                        startCol=midCol+1;
                    }
                    else{
                        endCol=midCol-1;
                    }
                }
                return false; 
            }
            else if(matrix[midRow][0]<target){
                startRow=midRow+1;
            }
            else{
                endRow=midRow-1;
            }
        }
        return false; 

    }
}