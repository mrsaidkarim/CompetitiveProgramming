#include<iostream>
 
using namespace std;
 
int main(){
    int h;
    int n;
    int s = 0;
    int i;
 
    cin >> n;
    cin >> h;
    int *T = new int(n);
    for(i = 0; i < n; i++){
        cin>>T[i];
    }
    for(i = 0; i < n; i++){
        if(T[i] > h)
            s += 2;
        else
            s++;
    }
    cout << s;
    return 0;
}
