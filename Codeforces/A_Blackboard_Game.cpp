#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
        cout << "Bob" << endl;
    else
        cout << "Alice" << endl;
    
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
