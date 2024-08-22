#include <iostream>

using namespace std;

int main()
{
	int n;
	int	x;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if (x >= 0)
			x += 2;
		cout << x << " ";
	}
	return (0);
}