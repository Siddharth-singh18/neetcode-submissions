class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int maxn= prices[n-1];
        int maxi=0;

        for(int i=n-2;i>=0;i--){
            maxn = max(maxn,prices[i]);
            maxi=max(maxi,maxn-prices[i]);
        }

        return maxi;
    }
};
