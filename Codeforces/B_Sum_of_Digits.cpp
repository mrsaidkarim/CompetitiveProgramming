#include <iostream>

using namespace std;

int main()
{
	string n;
	int count = 0;
	cin >> n;
	long long tmp;

	if (n.size() == 1)
	{
		cout << 0;
		return 0;
	}
	while (n.size() > 1)
	{
		tmp = 0;
		for(char c: n)
			tmp += c - '0';
		n = to_string(tmp);
		count++;
	}
	cout << count;
}