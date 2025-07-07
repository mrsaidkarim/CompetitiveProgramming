#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> res(n + 1, 0);
    map<int, int> mp;
    int mex = 0;
    for (int i = 0; i < n; i++)
    {
        int x; cin >> x;
        mp[x]++;
    }
    map<int, int> freq;
    for (auto &[x, y]: mp)
    {
        if (mex == x)
        {
            mex++;
            freq[y]++;
        }
    }
    res[n] = 1;
    for (int i = n - 1; i > n - mex; i--)
    {
        res[i] = res[i + 1] + 1;
    }
    res[0] = 1;
    for (int i = 1; i < n; i++)
    {
        if (res[i])
            break ;
        res[i] = res[i - 1] + freq[i];
    }
    for (int i = 0; i <= n; i++)
        cout << res[i] << " ";
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
