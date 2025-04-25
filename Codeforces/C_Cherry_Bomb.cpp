#include<iostream>
#include<string.h>
#include <vector>
#include <limits.h>

using namespace std;
 
int main(){
    
    int t;

    cin >> t;
    while (t--)
    {
        int n, k, comp, missed = 0, done = 0;
        cin >> n >> k;
        vector<int> a(n), b(n);
        comp = -1;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        
        for (int i = 0; i < n; i++)
        {
            if (comp != -1 && b[i] != -1 && b[i]+a[i] != comp)
            {
                cout << 0 << endl;
                done = 1;
                break;
            }
            if (b[i] != -1)
                comp = b[i] + a[i];
            else
                missed++;
        }
        if (done)
            continue;
        int max = -1, min = INT_MAX;
        for (int i =0; i < n; i++)
        {
            if (max < a[i])
                max = a[i];
            if (min > a[i])
                min = a[i];
        }
        if (missed == n)
            cout << k - (max - min) + 1 << endl;
        else
        {
            if (comp > k + min || max > comp)
                cout << 0 << endl;
            else
                cout << 1 << endl;

        }
    }
    return 0;
}


