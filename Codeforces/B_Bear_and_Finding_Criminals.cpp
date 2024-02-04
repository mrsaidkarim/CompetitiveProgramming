#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int	n;
	int	pos;
	int	i;
	int	j;
	int	count;
	vector<int> tab;

	count = 0;
	cin >> n >> pos;
	i = -1;
	tab.resize(n);
	while (++i < n)
		cin >> tab[i];
	pos--;
	i = pos - 1;
	j = pos + 1;
	if (tab[pos] == 1)
		count++;
	while (i >= 0 || j < n)
	{
		if (i >= 0 && j <= n - 1 && tab[i]+tab[j] == 2)
			count += 2;
		else if (i >= 0 && j >= n)
			count += tab[i];
		else if (j <= n - 1 && i < 0)
			count += tab[j];
		i--;
		j++;
	}
	cout << count << endl;
	return (0);
}