#include <iostream>
using namespace std;
 
int gcd(int a, int b){
    int tmp;
    while(a % b != 0){
        tmp = b;
        b = a%b;
        a = tmp;
    }
    return b;
}
int main() {
    int y,w,gcdval;
    cin >> y >> w;
    int max = (y > w) ? y : w;
    int num, denom;
    num = 7 - max ;
    denom = 6 ;
    
    gcdval = gcd(num, denom);
    
    num /= gcdval;
    denom /= gcdval;
    
    std::cout << num << "/" << denom;
 
    return 0;
}
