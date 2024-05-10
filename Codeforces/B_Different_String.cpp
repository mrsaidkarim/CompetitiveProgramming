#include <iostream>
#include <string>   
#include <algorithm>
using namespace std;

int main()
{
	int	n;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x = 0;
		string str;
		cin >> str;

		for(int i = 0; i < str.length() - 1; i++)
		{
			if (str[i] != str[i + 1])
			{
				char tmp = str[i];
				str[i] = str[i + 1];
				str[i + 1] = tmp;
				cout << "YES" << endl << str << endl;
				x = 1;
				break;
			}
		}
		if (x == 0)
			cout << "NO" << endl;
	}
}