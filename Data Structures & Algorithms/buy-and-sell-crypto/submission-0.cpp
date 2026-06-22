class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int>maxn(n);

        maxn[n-1]=prices[n-1];


        for(int i=n-2;i>=0;i--){
            maxn[i]=max(prices[i],maxn[i+1]);
        }

        int maxi = maxn[0]-prices[0];

        for(int i=1;i<n;i++){
            maxi = max(maxn[i]-prices[i],maxi);
        }

        return maxi;
    }
};
