class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int top = cost.size();
        int dp[1001] = {0};
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i = 2; i < top; i++)
        {
            dp[i] = min(dp[i-1]+ cost[i], dp[i-2] + cost[i]);
        }
        dp[top] = min(dp[top-2],dp[top-1]);
        return dp[top];
    }
};