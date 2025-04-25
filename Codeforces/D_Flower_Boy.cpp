#include<iostream>
#include<vector>
 
using namespace std;
 
int main(){
    
    int t;

    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            if (a[i] >= b[j])
                j += 1;
            i += 1;
        }
        if (j == m)
        {
            cout << 0 << endl;
            continue;
        }
        
        i = n - 1;
        j = m - 1;
        int lastvalid;
        while (i >= 0 && j >= 0)
        {
            if (a[i] >= b[j])
            {
                lastvalid = i;
                j--;
            }
            i--;
        }
        int newi = 0;
        int newj = 0;
        while (newi < lastvalid)
        {
            if (a[newi] >= b[newj])
                newj++;
            newi++;
        }
        if (newj == j || j == 0)
            cout <<  b[j] << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}

