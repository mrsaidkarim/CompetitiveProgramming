#include <iostream>
#include <map>

using namespace std;

int main() {
    int n;
    int s;
    long long *tab;
    long long *p;
    map<long long, int> prefixSumCount;
    long long ans;

    ans = 0;
    cin >> n >> s;
 
    tab = new long long[n];
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }
    
    p = new long long[n];
    p[0] = tab[0];
    
    for (int i = 1; i < n; i++) {
        p[i] = p[i - 1] + tab[i];
    }
    prefixSumCount[0] = 1;
    for (int i = 0; i < n; i++){
	long long x;
	x = p[i] - s;
	ans += prefixSumCount[x];
	prefixSumCount[p[i]]++;
    }
    cout << ans << endl;
    delete[] tab;
    delete[] p;
    
    return 0;
}

