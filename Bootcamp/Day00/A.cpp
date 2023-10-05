#include <iostream>
#include <vector>

using namespace std;

int	main()
{
	int	n;
	int	tmp;
	cin >> n;
	vector<int> tab(n);
	for (int i = 0; i < n; i++)
	{
		cin >> tmp;
		if (tmp >= 0)
			tmp += 2;
		tab[i] = tmp;
	}
	for (int i = 0; i < n; i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl;
	return 0;
}
