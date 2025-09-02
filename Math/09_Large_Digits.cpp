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
   ll n;
   cin >> n;
   if(n % 4 == 0) cout << "Even" << endl;
   else if (n % 2 != 0) cout << "Odd" << endl;
   else cout << "Same" << endl;
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
// https://atcoder.jp/contests/arc116/tasks/arc116_a