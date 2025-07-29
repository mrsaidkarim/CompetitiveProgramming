#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;


bool compare(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    return (a.first.first < b.first.first);
}

void solve()
{
    int n, k; cin >> n >> k;

    vector<pair<pair<int, int>, int> > casinos(n);
    for (int i = 0; i < n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        casinos[i] = make_pair(make_pair(a, b), c);
    }

    sort(casinos.begin(), casinos.end(), compare);

    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (k <= casinos[i].first.second && k >= casinos[i].first.first)
        {
            if (casinos[i].second > k)
            {
                k = casinos[i].second;
            }
        }
    }
    cout << k << endl;
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
