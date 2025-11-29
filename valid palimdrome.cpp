class Solution{
    public:
    bool isPalimdrome(string s){
        string result="";
        for(char i:s){
            if(isalnum(i)){
                result+=tolower(i);
            }
        }
        int start=0;
        int end=result.size()-1;
        while(start<end){
            if(result[start]!=result[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};