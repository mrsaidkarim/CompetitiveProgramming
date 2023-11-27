#include<iostream>
 
using namespace std;
 
 
int main(){
    int x;
    int y;
    int i;
    int j;
    int n;
    int T[5][5];
 
    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cin >> T[i][j];
            if(T[i][j] != 0){
                x = i+1;
                y = j+1;
            }
        }
    }
    n = abs(x - 3)+abs(y - 3);
    cout << n;
    return 0;
}
