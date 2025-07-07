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
    // string s;
    vector<char> s(n);
    vector<int> tab(n);
    for (int i = 0; i < n; i++)
        cin >> tab[i];
    int min = 1e6 + 1, max = 0;
    for (int i = 0; i < tab.size(); i++)
    {
        if (min > tab[i])
        {
            min = tab[i];
            s[i] = '1';
        }
        else
            s[i] = '0';
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (max < tab[i])
        {
            max = tab[i];
            s[i] = '1';
        }
    }
    for (int i = 0; i < n; i++)
        cout << s[i];
    cout<< endl;
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
