class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string>result;

        for(int i=0;i<nums.size();i++){
            result.push_back(to_string(nums[i]));
        }
        sort(result.begin(),result.end(),[](string &a,string &b){
            return a+b>b+a;
        });
        string largestNumber="";
        for(int i=0;i<result.size();i++){
            largestNumber+=result[i];
        }
        if(largestNumber[0]==){
            return "0";
        }
        return largestNumber;
    }
};