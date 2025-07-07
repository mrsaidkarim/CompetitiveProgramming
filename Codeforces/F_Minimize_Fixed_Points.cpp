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
    vector<int> tab(n);
    tab[0] = 1;
    for (int i = 1; i < n; i++)
    {
        tab[i] = i + 1;
    }
    vector<int> largest_div(n, 1);
    for (int i = 3; i < n; i++)
    {
        for (int j = 2; j <= sqrt(n); j++)
        {
            if ((i + 1) % j == 0)
            {
                largest_div[i] = (i + 1) / j;
                break ;
            }
        }
    }
    // for (int i = 0; i < n; i++)
    //     cout << largest_div[i] << ", ";
    // cout << endl;
    for (int i = n - 1; i > 0; i--)
    {
        if (largest_div[i] != 1)
        {
            int tmp = tab[i];
            tab[i] = tab[largest_div[i] - 1];
            tab[largest_div[i] - 1] = tmp;
        }
    }
    for (int i = 0; i < n; i++)
        cout << tab[i] << " ";
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
