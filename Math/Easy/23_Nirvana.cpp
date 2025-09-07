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
    ll n;
    cin >> n;
    ll ans = 1;
    ll len = log10(n) + 1;
    for (ll i = 0; i < len; i++)
    {
        ll num = n;
        ll temp = 1;
        ll j = i;
        while (j--)
        {
            temp *= 9;
            num /= 10;
        }
        if (i >= 1)
        {
            if (num != 1)
                temp *= ((num % 10) - 1);
            num /= 10;
        }
        while (num)
        {
            temp *= num % 10;
            num /= 10;
        }
        ans = max(ans, temp);
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