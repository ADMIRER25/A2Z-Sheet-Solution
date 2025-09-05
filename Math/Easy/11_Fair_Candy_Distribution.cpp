#include <bits/stdc++.h>
using namespace std;

#define ll long long
ll Sum_Of_Digits(ll n)
{
    ll sum = 0;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
void Solution()
{
   ll n,k;
   cin >> n >> k;
   vector<ll>arr(n);
   map<ll,ll>mp;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        mp[arr[i]] = 0;
    }
    ll x = k / n;
    ll r = k % n;
    // cout << x << " " << r << endl;
    for(auto &it : mp) {
        if(r > 0) {
            it.second = x + 1;
            r--;
        }
        else it.second = x;
    }   
    for(int i = 0; i < n; i++) {
        cout << mp[arr[i]] << endl;
    }
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    // ll t;
    // cin >> t;
    // while (t--)
        Solution();
    return 0;
}
// https://atcoder.jp/contests/abc208/tasks/abc208_c