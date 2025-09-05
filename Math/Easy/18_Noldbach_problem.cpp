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
    ll n, k;
    cin >> n >> k;
    vector<ll> isPrime = sieve(n);
    vector<ll> primes;
    for (ll i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            // cout << i << " ";
            primes.push_back(i);
        }
    }
    vector<ll> ans;
    for (ll i = 1; i < primes.size(); i++)
    {
        ll prime_no = primes[i] + primes[i - 1] + 1;
        if (prime_no <= n && isPrime[prime_no])
        {
            ans.push_back(prime_no);
        }
    }
    ans.size() >= k ? cout << "YES" << endl : cout << "NO" << endl;
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