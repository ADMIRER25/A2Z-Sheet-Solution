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
    vector<ll> even, odd;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        if (val % 2 == 0)
            even.push_back(val);
        else
            odd.push_back(val);
    }
    sort(even.begin(), even.end(), greater<int>());
    sort(odd.begin(), odd.end(), greater<int>());
    ll even_sum = even.size() >= 2 ? even[0] + even[1] : -1;
    ll odd_sum = odd.size() >= 2 ? odd[0] + odd[1] : -1;
    cout << max(even_sum, odd_sum) << endl;
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