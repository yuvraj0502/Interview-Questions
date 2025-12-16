class Solution{
    public:
    void constructLPS(string pattern,vector<int>&lps){
        int len=0;
        lps[0]=0;
        int i=1;

        while(i<pattern.length()){
            if(pattern[i]==pattern[len]){
                len++;
                lps[i]=len;
                i++;
            }else{
                if(len!=0){
                    len=lps[len-1];
                }else{
                    lps[i]=0;
                    i++;
                }
            }
        }
    }

    vector<int>KMPsearch(string text,string pattern){
        int n=text.lenghth();
        int m=pattern.length();

        vector<int>lps(m);
        vector<int>result;
        constructLPS(pattern,lps);

        int i,j=0;
        while(i<n){
            if(text[i]==pattern[j]){
                i++;
                j++;

                if(j==m){
                    result.push_back(i-j);
                    j=lps[j-1];
                }
            }else{
                if(j!=0){
                    j=lps[j-1];
                }else{
                    i++;
                }
            }
        }
        return result;

    }
}