#include<iostream>
 
using namespace std;
 
 
int main(){
    int x, y;
    cin >> x;
    cin >> y;
    
    int z = x;
    int cpt = 1;
    while (x % 10 != 0 && x % 10 != y)
    {
        x += z;
        cpt++;
    }
    cout << cpt ;
 
 
 
    return 0;
}
