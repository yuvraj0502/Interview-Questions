class Solution{
    public:
    bool isMatch(string s,string p){
        int i=0,j=0;
        while(i<s.length() && j<p.length()){
            if(s[i]==p[j] || p[j]=='?'){
                i++;
                j++;
            }else if(p[j]=='*'){
                return isMatch(s.substr(i),p.substr(j+1)) || 
                       isMatch(s.substr(i+1),p.substr(j));
            }else{
                return false;
            }
        }
        while(j<p.length() && p[j]=='*'){
            j++;
        }
        return i==s.length() && j==p.length();
    }
}