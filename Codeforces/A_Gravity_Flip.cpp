#include<iostream>
 
using namespace std;
 
 
int main(){
    int *T;
    int i;
    int s;
    int n;
    int m;
 
    cin >> n;
    T = new int(n);
    cin >> T[0];
    for(i = 1; i < n; i++){
        cin >> T[i];
        for(s = i; s > 0; s--){
            if(T[s-1] > T[s]){
                m = T[s-1];
                T[s-1] = T[s];
                T[s] = m;
            }
        }
    }
    for(i = 0; i < n; i++){
        cout << T[i] << " ";
    }
    return 0;
}
