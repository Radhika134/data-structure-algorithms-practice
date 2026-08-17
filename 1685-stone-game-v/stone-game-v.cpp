class Solution {
public:
    int dp[501][501];
    vector<int> prefix;

    int solve(int l, int r) {
        if (l == r)
            return 0;

        if (dp[l][r] != -1)
            return dp[l][r];

        int ans = 0;

        for (int k = l; k < r; k++) {
            int left = prefix[k + 1] - prefix[l];
            int right = prefix[r + 1] - prefix[k + 1];

            if (left < right) {
                ans = max(ans, left + solve(l, k));
            }
            else if (left > right) {
                ans = max(ans, right + solve(k + 1, r));
            }
            else {
                ans = max(ans,
                    left + max(solve(l, k), solve(k + 1, r)));
            }
        }

        return dp[l][r] = ans;
    }

    int stoneGameV(vector<int>& stoneValue) {
        int n = stoneValue.size();

        prefix.resize(n + 1, 0);

        for (int i = 0; i < n; i++)
            prefix[i + 1] = prefix[i] + stoneValue[i];

        memset(dp, -1, sizeof(dp));

        return solve(0, n - 1);
    }
};