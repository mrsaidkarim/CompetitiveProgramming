#include <iostream>
using namespace std;
int main() {
    
    string s,t;
    
    cin >> s >> t;
    int pos = 1;
    
    for(char instruction : t){
        if(s[pos - 1] == instruction)
            pos++;
    }
    cout << pos;
 
    return 0;
}
