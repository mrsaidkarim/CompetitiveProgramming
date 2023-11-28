#include <iostream>
#include <vector> 
using namespace std;
 
int main() {
    int n,m;
    cin >> n;
    
    vector<int> birds(n);
    for(int i = 0; i < n; i++)
        cin >> birds[i];
        
    cin >> m;
    
    for(int i = 0; i < m; i++){
        int wire, bird;
        cin >> wire >> bird;
        if(wire > 1)
            birds[wire - 2] += bird - 1;
        if(wire < n)
            birds[wire] += birds[wire-1] - bird;
        birds[wire-1] = 0;
    }
    for(int i = 0; i < n; i++)
        cout << birds[i] << "\n";
 
    return 0;
}
