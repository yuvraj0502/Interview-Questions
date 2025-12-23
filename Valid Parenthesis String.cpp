class Solution{
    public:
    bool checkValidString(string s){
        int minOpen=0;
        int maxOpen=0;
        for(char c:s){
            if(c=='('){
                maxOpen++;
                minOpen++;
            }else if(c==')'){
                maxOpen--;
                minOpen--;
            }else{
                minOpen--;
                maxOpen++;
            }
            if(maxOpen<0){
                return false;
            }
            if(minOpen<0){
                minOpen=0;
            }
        }
        return minOpen==0;
    }
}