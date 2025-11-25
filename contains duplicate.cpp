// Method 1: Using Hash Map

class Solution{
    public:
    bool containsDuplicate(vector<int>&nums){
        unordered_map<int,int>mp;
        for(int i:nums){
            mp[i]++;
            if(mp[i]>1){
                return true;
            }
        }
        return false;
    }
}

// Method 2: Using Sorting

class Solution{
    public:
    bool containsDuplicate(vector<int>&nums){
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return true;
            }
        }
        return false;
    }
};

// Method 3: Using Set

class Solution{
    public:
    bool containsDuplicate(vector<int>&nums){
        unordered_set<int>seen;
        for(int i:nums){
            if(seen.find(i)!=seen.end()){
                return true;
            }
            seen.insert(i);
        }
        return false;
    }
};
