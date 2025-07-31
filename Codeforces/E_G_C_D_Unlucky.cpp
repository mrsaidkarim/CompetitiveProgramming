#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;
~
void solve()
{
    int n;
    cin >> n;
    vector<long long> p(n);
    vector<long long> s(n);
    
    for (int i = 0; i < n; i++) cin >> p[i];
    for (int i = 0; i < n; i++) cin >> s[i];

    vector<long long> lcmtab(n);
    for (int i = 0; i < n; i++)
    {
        lcmtab[i] = lcm(p[i], s[i]);
    }
    bool res = true;
    long long pgcd = lcmtab[0];
    for (int i = 0; i < n; i++)
    {
        pgcd = gcd(pgcd, lcmtab[i]);
        if (pgcd != p[i])
        {
            res = false;
            break ;
        }
    }
    long long sgcd = lcmtab[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        sgcd = gcd(sgcd, lcmtab[i]);
        if (sgcd != s[i])
        {
            res = false;
            break ;
        }
    }
    if (res)
        cout << "YES\n";
    else
        cout << "NO\n";
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
