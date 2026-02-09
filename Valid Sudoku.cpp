class Solution{
    public:
    bool isValidSudoku(vector<vector<char>>&board){
        int row[9][9]={false};
        int column[9][9]={false};
        int box[9][9]={false};

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    int nums=board[i][j]-'1';
                    int boxIndex=(i/3)*3+(j/3);
                    if(row[i][nums] || column[j][nums] || box[boxIndex][nums]){
                        return false;
                    }
                    row[i][nums]=true;
                    column[j][nums]=true;
                    box[boxIndex][nums]=true;
                }
            }
        }
        return true;
    }
}