#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    int n;
    int nbr;
    string s;
    
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        nbr = 0;
        cin >> n;
        cin >> s;
        for(int k = 0; k < n; k++)
        {
            if (s[k] == '@')
                nbr++;
            if (s[k] == '*' && s[k+1] == '*')
                break;
        }
        cout << nbr << endl;
    }
}