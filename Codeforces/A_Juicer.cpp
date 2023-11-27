#include <iostream>
using namespace std;
 
int main() {
    int n,b,d;
    cin >> n >> b >> d;
    int T[n];
    for(int i = 0; i < n; i++)
        cin >> T[i];
    int s = 0;
    int cpt = 0;
    for(int i = 0; i < n; i++)
    {
        if(T[i] <= b){
            s += T[i];
            if(s > d){
                cpt++;
                s = 0;
            }
        }
    }
    cout << cpt;
 
    return 0;
}
