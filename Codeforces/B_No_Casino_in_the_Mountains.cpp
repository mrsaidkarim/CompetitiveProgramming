#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k; cin >> n >> k;

    vector<int> tab(n); for (int i = 0; i < n; i++) cin >> tab[i];
    
    int i = 0;
    int j;
    int res = 0;
    while (i < n)
    {
        for (j = i; j < n && j < i + k && tab[j] == 0; j++);
        if (j == i + k)
        {
            i += k + 1;
            res++;
        }
        else if (j < n)
        {
            i = j + 1;
        }
        else
            break ;
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
