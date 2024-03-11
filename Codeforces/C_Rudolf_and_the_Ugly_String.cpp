#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;

	cin >> n;
    for (int i = 0; i < n; i++)
	{
        int 	len;
        int 	res;
		string	str;

		res = 0;
        cin >> len;
		cin >> str;
        for (int i = 0; i < len; i++) {
            if (str.compare(i, 3, "map") == 0 || str.compare(i, 3, "pie") == 0) {
                i += 2;
                res++;
            }
        }
        cout << res << std::endl;
    }

    return 0;
}
