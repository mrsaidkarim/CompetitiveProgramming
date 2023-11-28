#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int T[4];
    int cpt = 0;
 
    for (int i = 0; i < 4; i++)
        cin >> T[i];
 
    sort(T, T + 4);
    for(int i = 0; i < 3; i++){
        for(int j = i+1; j < 4; j++){
            if(T[j] == T[i] && T[i] != T[i-1]){
                cpt ++;
            }
        }
        
            
    }
        
    cout << cpt ;
    return 0;
}

