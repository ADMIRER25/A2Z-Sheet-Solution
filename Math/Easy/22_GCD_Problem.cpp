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
    ll m = n - 1; // a + b = n - 1
    ll a, b, c = 1;
    if (m % 2 == 0)
    {
        if ((m / 2) % 2 == 0)
        {
            a = m / 2 - 1;
            b = m / 2 + 1;
        }
        else
        {
            a = m / 2 - 2;
            b = m / 2 + 2;
        }
    }
    else
    {
        a = 2;
        b = n - 3;
    }
    cout << a << " " << b << " " << c << endl;
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