#include<iostream>
 
using namespace std;
 
 
int main(){
    int n = 0;
    int a;
    int b;
 
    cin >> a;
    cin >> b;
 
    while(a <= b){
        a *= 3;
        b *= 2;
        n++;
    }
    cout << n;
    return 0;
}

