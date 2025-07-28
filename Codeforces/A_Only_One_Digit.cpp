#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
// #include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x;cin >> x;
    int min = 10;
    
    while (x > 0)
    {
        if (min > x % 10)
            min = x % 10;
        x /= 10;
    }
    cout << min << endl;
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
