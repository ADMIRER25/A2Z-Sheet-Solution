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
bool isPrime(ll n)
{
    if (n <= 1)
        return false;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
vector<ll> sieve(ll n)
{
    vector<ll> isPrime(n + 1, 1);
    isPrime[0] = isPrime[1] = 0;
    for (ll i = 2; i * i <= n; i++)
    {
        if (isPrime[i])
        {
            for (ll j = i * i; j <= n; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
    return isPrime;
}
void Solution()
{
    ll n, m;
    cin >> n >> m;
    ll maxi1 = INT_MIN, maxi2 = INT_MIN, mini1 = INT_MAX, mini2 = INT_MAX;
    for (ll i = 0; i < n * m; i++)
    {
        ll x;
        cin >> x;
        if (x > maxi1)
        {
            maxi2 = maxi1;
            maxi1 = x;
        }
        else if (x > maxi2)
        {
            maxi2 = x;
        }
        if (x < mini1)
        {
            mini2 = mini1;
            mini1 = x;
        }
        else if (x < mini2)
        {
            mini2 = x;
        }
    }
    //cout << maxi1 << " " << maxi2 << " " << mini1 << " " << mini2 << endl;
    ll rest1 = (n * m) - min(n, m); //(n*m) - 1 - min(n, m);
    ll rest2 = min(n, m) - 1;

    //in (1,1) fix maximum and two consecutive minimums are fixed to 1,2 and 2,1 respectively
    ll ans = max((maxi1 - mini1), (maxi1 - mini2)) * max(rest1, rest2) + min((maxi1 - mini1), (maxi1 - mini2)) * min(rest1, rest2);

    //in (1,1) fix minimum and two consecutive maximums are fixed to 1,2 and 2,1 respectively
    ans = max(ans, max((maxi1 - mini1), (maxi2 - mini1)) * max(rest1, rest2) + min((maxi1 - mini1), (maxi2 - mini1)) * min(rest1, rest2));
    cout << ans << endl;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    ll t;
    cin >> t;
    while (t--)
        Solution();
    return 0;
}