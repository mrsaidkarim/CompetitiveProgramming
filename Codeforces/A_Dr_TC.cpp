#include<iostream>
#include<string.h>
 
using namespace std;
 
int main(){
    
    int t;

    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int res = 0;
        for(auto c : s)
        {
            if (c == '1')
                res += n - 1;
            else
                res++;
        }
        cout << res << endl;
    }
    return 0;
}

