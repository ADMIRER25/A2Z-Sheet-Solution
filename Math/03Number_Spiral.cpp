#include <bits/stdc++.h>
using namespace std;
#define ll long long
void Solution()
{
    ll row, col;
    cin >> row >> col;
    ll ans;
    if (row >= col)
    {
        if (row % 2 == 0)
        {
            ans = (row * row) - (col - 1);
        }
        else
        {
            ans = (row - 1) * (row - 1) + 1 + (col - 1);
        }
        cout << ans << endl;
    }
    else
    {
        if (col % 2 == 1)
        {
            ans = (col * col) - (row - 1);
        }
        else
        {
            ans = (col - 1) * (col - 1) + 1 + (row - 1);
        }
        cout << ans << endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        Solution();
    }
    return 0;
}
// https://cses.fi/problemset/task/1071/