class Solution{
    public:
    vector<int>findDuplicates(vector<int>&nums){
        unordered_map<int,int>mp;
        vector<int>result;
        for(int i:nums){
            mp[i]++;
            if(mp[i]==2){
                result.push_back(i);
            }
        }
        return result;
    }
}