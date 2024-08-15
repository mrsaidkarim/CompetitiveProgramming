#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int nbr;
    cin >> nbr;
    for(int i = 0; i < nbr; i++) {
        string s, t;
        cin >> s >> t;
        int j = 0;
        for (int k = 0; k < s.length(); k++) {
            if (s[k] == t[j] || s[k] == '?') {
                if (s[k] == '?') {
                    if (j < t.length())
                        s[k] = t[j];
                    else
                        s[k] = 'a';
                }
                if (j < t.length()) j++;
            }
        }
        if (j == t.length())
            cout << "YES" << endl << s << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
