// URL: https://www.spoj.com/problems/PRIME1/
// TODO: revisit, find out why vector solution ins't fast enough
# include <bits/stdc++.h>
# include <math.h>

using namespace std;

bool is_prime(long n) {
    if (n == 1)
        return false;

    if (n == 2)
        return 1;

    if (n % 2 == 0)
        return false;

    for (long i = 3; i <= sqrt(n); i += 2)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--)
    {
        long n, m;
        cin >> n >> m;

        for (long i = n; i <= m; i++)
        {
            if (is_prime(i))
                cout << i << "\n";
        }
        cout << "\n";
    }
}

/*
 * Tried a vector solution of storing the prime numbers in a vector
 * unfourtunately it gave me a time limit exceeded error. Not sure why. I thought it would be faster
 */