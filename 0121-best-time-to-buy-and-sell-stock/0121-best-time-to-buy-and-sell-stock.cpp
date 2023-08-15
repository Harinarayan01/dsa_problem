class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int minone=prices[0];
    
        for(int j=0;j<prices.size();j++){
            minone=min(minone,prices[j]);
            int profit=prices[j]-minone;
            ans=max(profit,ans);
        }
        
    return ans;
    }
};