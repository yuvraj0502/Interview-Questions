class Solution{
    public:
    vector<int>maxNumber(vector<int>&nums1,vector<int>&nums2,int k){
        stack<int>st1;
        stack<int>st2;
        vector<int>result;
        
        for(int i=0;i<nums1.size();i++){
            st1.push(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
            st2.push(nums2[i]);
        }
        while(k--){
            int top1=st1.top();
            int top2=st2.top();
            if(top1>top2){
                result.push_back(top1);
                st1.pop();
            }else{
                result.push_back(top2);
                st2.pop();
            }
        }
        return result;
    }
}