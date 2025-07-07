#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int count = 0;
    for (auto c : s)
        if (c == '1')
            count++;
    if (count <= k || s.length() / 2 < k)
        cout << "Alice" << endl;
    else
        cout << "Bob" << endl;
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
