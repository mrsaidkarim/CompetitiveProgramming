#include <iostream>

using namespace std;

int main() {
    int n;
    int q;
    long long *tab;
    long long *p;
    
    cin >> n >> q;
    
    tab = new long long[n];
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }
    
    p = new long long[n];
    p[0] = tab[0];
    
    for (int i = 1; i < n; i++) {
        p[i] = p[i - 1] + tab[i];
    }
    
    while (q-- > 0) {
        int l;
	int r;

        cin >> l >> r;
        l--;
        r--;
        
        cout << p[r] - (l ? p[l - 1] : 0) << endl;
    }
    
    delete[] tab;
    delete[] p;
    
    return 0;
}

