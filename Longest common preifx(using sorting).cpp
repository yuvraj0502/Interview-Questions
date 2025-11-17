class Solution{
    public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());

        int first=strs.front();
        int last=strs.back();
        int minLength=min(first.lenght(),last.lenght());

        int i=0;
        while(i<minLength && first[i]==last[i]){
            i++;
        }
        return first.substr(0,i);
    }
}