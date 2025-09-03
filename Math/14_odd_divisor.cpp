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
void Solution()
{
    ll n;
    cin >> n;
    log2(n) == floor(log2(n))? cout << "NO" << endl : cout << "YES" << endl;
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