#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
int main()
{
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    cin >> n;
    ll ans = 0;
    ll multiply_5 = 5;
    while(multiply_5 <= n){
        ans += n / multiply_5;
        multiply_5 *= 5;
    }
    cout << ans << endl;
return 0;
}
// https://cses.fi/problemset/task/1618/