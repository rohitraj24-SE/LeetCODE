class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int minPrices=prices[0];
        int maxProfit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<minPrices)
            minPrices=prices[i];
            int profit=prices[i]-minPrices;
            if(profit>maxProfit)
            maxProfit=profit;
            }
    return maxProfit;    
    }
};