#include<iostream>
#include<string.h>
 
using namespace std;
 
int main(){
    int n;
    int a = 0;
    int d = 0;
    int i;
    char s;
 
    cin >> n;
 
    for(i = 0; i < n; i++){
        cin>>s;
        if(s == 'A')
            a++;
        else if(s == 'D')
            d++;
    }
    if(a > d)
        cout << "Anton";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}

