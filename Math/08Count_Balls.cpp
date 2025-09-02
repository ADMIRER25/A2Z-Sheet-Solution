#include <bits/stdc++.h>
using namespace std;

#define ll long long
void Solution()
{
    ll N, A, B;
    cin >> N >> A >> B;
    ll ans = (N / (A + B)) * A + min(N % (A + B), A);
    cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    // int t;
    // cin >> t;
    // while (t--)
        Solution();
    return 0;
}
// https://atcoder.jp/contests/abc158/tasks/abc158_b