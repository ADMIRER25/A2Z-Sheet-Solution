#include <bits/stdc++.h>
using namespace std;

// Function to find the k-th common divisor of two numbers
void Solution()
{
    int a, b, k;
    cin >> a >> b >> k;
    int gcd = __gcd(a, b);

    vector<int> divisors;
    for (int i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            divisors.push_back(i);
            if (i != gcd / i)
                divisors.push_back(gcd / i);
        }
    }
    sort(divisors.rbegin(), divisors.rend());
    cout << divisors[k - 1] << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    Solution();
    return 0;
}
// https://atcoder.jp/contests/abc120/tasks/abc120_b