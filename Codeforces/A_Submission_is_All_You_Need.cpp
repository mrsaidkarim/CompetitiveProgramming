#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n; cin >> n;

    vector<int> tab(n); for (int i = 0; i < n; i++) cin >> tab[i];

    sort(tab.begin(), tab.end());
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (tab[i] == 0)
            res++;
        else
            res += tab[i];
    }
    cout << res << endl;
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
