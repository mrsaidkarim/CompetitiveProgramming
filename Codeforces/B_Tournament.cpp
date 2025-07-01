#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, j, k;
    cin >> n >> j >> k;
    vector<int> tab(n);
    for (int i = 0; i < n; i++)
        cin >> tab[i];
    j = tab[j - 1];
    sort(tab.begin(), tab.end());
    if (k == 1 && tab[n - 1] > j)
        cout <<  "NO"  << endl;
    else
        cout << "YES" << endl;

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
