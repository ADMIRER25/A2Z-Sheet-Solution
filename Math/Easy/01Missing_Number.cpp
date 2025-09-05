#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
 
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
    int n;
    cin >> n;
    long long xorr = 0;
    for (int i = 1; i <= n; i++) xorr ^= i;
    int j = n - 1;
    long long xorr2 = 0;
    while (j--)
    {
        int b;
        cin >> b;
        xorr2 ^= b;
    }
    cout << (xorr ^ xorr2);
return 0;
}
//https://cses.fi/problemset/task/1083/