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
    int prev = 0, curr;
    long long int op = 0;
    while (n--)
    {
        cin >> curr;
        if (prev > curr)
        {
            op += (prev - curr);
            curr = prev;
        }
        prev = curr;
    }
    cout << op;
    return 0;
}
// https://cses.fi/problemset/task/1094/
