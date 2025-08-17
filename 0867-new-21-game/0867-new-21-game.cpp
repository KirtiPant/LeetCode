class Solution{
public:
    double new21Game(int n, int k, int maxPts){
        if (k == 0 || n >= k - 1 + maxPts){
            return 1;
        }
        vector<double> dp(n + 1, 0.0);
        dp[0] = 1;
        double winSum = 1, prob= 0;
        for (int i = 1; i <= n; i++) {
            dp[i] = winSum / maxPts;
            if (i < k) winSum += dp[i];
            else prob += dp[i];
            if (i >= maxPts) winSum -= dp[i - maxPts];
        }
        return prob;
    }
};