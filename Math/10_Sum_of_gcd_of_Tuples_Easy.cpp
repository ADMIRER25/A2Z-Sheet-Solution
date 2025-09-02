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
   ll k;
    cin >> k;
    ll ans = 0;
    for(int a = 1; a <= k; a++){
        for(int b = 1; b <= k; b++){
            for(int c = 1; c <= k; c++){
                ans += __gcd(a, __gcd(b, c));
            }
        }
    }
    cout << ans << endl;
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
//https://atcoder.jp/contests/abc162/tasks/abc162_c