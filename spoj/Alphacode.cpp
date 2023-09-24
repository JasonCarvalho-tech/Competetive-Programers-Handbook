// URL: https://www.spoj.com/problems/ACODE/
# include <bits/stdc++.h>
# include <math.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    while (s != "0")
    {
        int l = s.length();
        int dp[l+1];
        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= l; i++)
        {
            dp[i] = 0;
            if (s[i-1] > '0')
                dp[i] = dp[i-1];
            if (s[i-2] == '1' || (s[i-2] == '2' && s[i-1] < '7'))
                dp[i] += dp[i-2];
        }


        cout << dp[l] << "\n";
        cin >> s;
    }
}

/*
 * Dynamic programming problem that is a little tricky to think about. Because of the
 * way the number of different combinations work.
*/