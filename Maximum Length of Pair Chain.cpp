class Solution{
    public:
    int findLongestChain(vector<vector<int>>&pairs){
        sort(pairs.begin(),pairs.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1]<b[1];
        })
        int maxLength=1;
        int currentEnd=INt_MIN;
        for(auto&pair:pairs){
            if(pair[0]>currentEnd){
                maxLength++;
                currentEnd=pair[1];
            }
        }
        return maxLength;
    }
}