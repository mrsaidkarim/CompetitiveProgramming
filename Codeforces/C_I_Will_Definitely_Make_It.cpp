#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> heights(n); for (int i = 0; i < n; i++) cin >> heights[i];
    int tmp = heights[k - 1];
    sort(heights.begin(), heights.end());

    int water = 1;
    int i;
    for (i = 0; i < n; i++)
    {
        if (tmp == heights[i])
            break ;
    }
    while (i < n - 1)
    {
        if (water + abs(heights[i] - heights[i + 1]) - 1 > heights[i])
        {
            cout << "NO\n";
            break ;
        }
        water += abs(heights[i] - heights[i + 1]);
        i++;
    }
    if (i == n - 1)
        cout << "YES\n";
    
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
