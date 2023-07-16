// URL: https://www.spoj.com/problems/AGGRCOW/
// TODO: revisit
# include <bits/stdc++.h>

using namespace std;

int check_maximum_distance(vector<int> cows, int c, int distance) {
    int count = 1;
    int last_position = cows[0];
    for (int i = 1; i < cows.size(); ++i) {
        if (cows[i] - last_position >= distance) {
            count++;
            last_position = cows[i];
        }
    }
    return count >= c;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        // test case
        int n, c;
        cin >> n >> c;
        vector<int> cows(n);
        for (int i = 0; i < n; ++i) {
            cin >> cows[i];
        }
        sort(cows.begin(), cows.end());

        // binary search
        int low = 0;
        int high = cows[n - 1] - cows[0];
        while (low < high) {
            int mid = (low + high + 1) / 2;
            if (check_maximum_distance(cows, c, mid)) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }

        cout << low << "\n";
    }
}

/*
 * intresting use of a binary search to speed up finding of the mid. I
 * overthought this problem, looking for speed-ups where speed ups aren't
 * possible. Maybe should brute force beore trying to think about other ways to
 * do it. 
 * Also the question itself confused me a bit. Specifically the part about the
 * stalls being placed at the positions given in the input. I thought that we
 * had all the stalls available.
 */