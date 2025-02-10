#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int nbr;
    cin >> nbr;
    string tmp;
    for(int i = 0; i < nbr; i++) {
        cin >> tmp;

        tmp = tmp.substr(0, tmp.size() - 2);
        tmp.append("i");
        cout << tmp << endl;
    }
    return 0;
}
