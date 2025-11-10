class Solution{
    public:
    int maxProfit(vector<int>& prices){
        int maxValue=INT_MIN;
        int minValue=INT_MAX;

        for(int i=0;i<prices.size();i++){
            minValue=min(minValue,prices[i]);
            int currentValue=prices[i]-minValue;
            maxValue=max(maxValue,currentValue);
        }
        return maxValue;
    }
}
