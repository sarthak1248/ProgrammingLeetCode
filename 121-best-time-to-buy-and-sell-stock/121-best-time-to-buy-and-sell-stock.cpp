class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxval=INT_MAX;
        int ans=0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<maxval){
                maxval=prices[i];
            }
            else if(prices[i]-maxval>ans){
                ans=prices[i]-maxval;
            }
        }
        return ans;
    }
};