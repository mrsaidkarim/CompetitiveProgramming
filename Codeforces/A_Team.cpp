#include<iostream>
 
using namespace std;
 
 
int main(){
    int n;
    int a;
    int b;
    int c;
    int m = 0;
    int i;
 
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> a;
        cin >> b;
        cin >> c;
        if(a == 1)
        {
            if(b == 1)
                m++;
            else
                if(c == 1)
                    m++;
        }
        else
            if(b == 1)
                if(c == 1)
                    m++;
    }
    cout << m;
    return 0;
}
