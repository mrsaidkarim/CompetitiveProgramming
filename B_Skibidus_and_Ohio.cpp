#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    int nbr;
    cin >> nbr;
    string tmp;
    
    int j;
    for(int i = 0; i < nbr; i++) {
        cin >> tmp;
        char prev = 0, next = 0;
        while(j + 2 < tmp.size())
        {
            j++;
            if (tmp[j] == tmp[j + 1])
            {
                tmp = tmp.erase(j, 1);
                if (j + 1 < tmp.size())
                    next = tmp[j + 1];
                if (j != 0)
                    tmp[j] = prev;
                else if (next)
                    tmp[j] = next;
                else
                    tmp[j] = 'a';
                j = -1;
            }
            prev = tmp[j];
        }
        cout << tmp.size() << endl;
    }
    return 0;
}
