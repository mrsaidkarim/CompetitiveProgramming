#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> tab;
	int	s;
	int m;
	int rest;
	int ans;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		s = 0;
		rest = 0;
		ans = 0;
		cin >> m;
		tab.resize(m);
		for (int j = 0; j < m; j++)
		{
			cin >> tab[j];
			s += tab[j];
		}
		for (int j = 0; j < m; j++)
		{
			if (tab[j] > s / m)
				rest += tab[j] - s / m;
			else if (tab[j] < s / m)
			{
				if (rest < s / m - tab[j])
				{
					ans = 1;
					break;
				}
				else
				{
					rest -= s / m - tab[j];
				}
			}
		}
		if (ans == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return (0);
}