class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int result = 0;
        vector<int> dp(prices.size());
        for(int i = 1; i < prices.size(); i++)
        {
            minPrice = min(minPrice, prices[i]);
            if(result < prices[i] - minPrice)
            {
                result = prices[i] - minPrice;
            }
        }
        return result;
    }
};