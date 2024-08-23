#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int main()
{
    int n,m;
    vector<int> res;

    cin >> n;
    vector<int> tab1(n);
    for(int i = 0; i < n; i++)
        cin >> tab1[i];
    cin >> m;
    unordered_set<int> tab2;
    for(int i = 0; i < m; i++)
    {
        int tmp;
        cin >> tmp;
        tab2.insert(tmp);
    }
    for(int i = 0; i < n; i++)
    {
        if (tab2.find(tab1[i]) == tab2.end())
            res.push_back(tab1[i]);
    }
    cout << res.size() << endl;
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return (0);
}
