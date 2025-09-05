#include <bits/stdc++.h>
using namespace std;

#define ll long long
void Solution()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    unordered_map<int, int> mp;
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += i - mp[arr[i]];
        mp[arr[i]]++;
    }
    cout << ans << endl;
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
// https://atcoder.jp/contests/abc206/tasks/abc206_c