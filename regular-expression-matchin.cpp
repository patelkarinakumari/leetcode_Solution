class Solution {
public:
    int dp[21][21];
    int n, m;
    string s1, s2;
    bool rec(int i, int j) {
        if (i >= n && j >= m)
            return true;
        if (j >= m)
            return false;
        if (dp[i][j] != -1)
            return dp[i][j];
        bool ans = false;
        if (j != m - 1 && s2[j + 1] == '*') {
            ans |= rec(i, j + 2);
            int k = i;
            while (k < n) {
                if (s2[j] == '.' || s1[k] == s2[j]) {
                    ans |= rec(k + 1, j + 2);
                } else
                    break;
                k++;
            }
        } else if (i >= n)
            ans = false;
        else if (s1[i] == s2[j] || s2[j] == '.')
            ans |= rec(i + 1, j + 1);
        dp[i][j] = ans;
        return ans;
    }
    bool isMatch(string s, string p) {
        s1 = s;
        s2 = p;
        n = s1.length();
        m = s2.length();
        memset(dp, -1, sizeof(dp));
        return rec(0, 0);
    }
};