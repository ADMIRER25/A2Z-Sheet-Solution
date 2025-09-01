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
    int odd_cnt = 0;
    for(int i = 0; i < n; i++){
        int val;
        cin >> val;
        if(val % 2 != 0) odd_cnt++;
    }
    if(odd_cnt % 2 == 0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
return 0;
}
// https://atcoder.jp/contests/agc010/tasks/agc010_a