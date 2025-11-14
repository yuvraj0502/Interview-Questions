class Solution{
    public:
    bool isValid(string s){
        stack<char>st;
        for(char i:s){
            if(i=='(' || i=='{' || i=='['){
                st.push(i);
            }else{
                if(st.empty()){
                    return false;
                }
                char topElemnt=st.top();
                st.pop();
                if((i==')' && topElemnt!='(') ||
                   (i=='}' && topElemnt!='{') ||
                   (i==']' && topElemnt!='[')){
                    return false;
                }
            }
        }
        return st.empty();
    }
}