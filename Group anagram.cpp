class Solution{
    public:
    vector<vector<string>> groupAnagrams(vector<string>& strs){
        vector<vector<string>result;
        unorderd_map<string,vector<string>>mp;

        for(string i;strs){
            string word=i;
            sort(word.begin(),word.end());
            mp[word].push_back(i);
        }
        for(auto i:mp){
            result.push_back(i.second);
        }
        return result;
    }
}