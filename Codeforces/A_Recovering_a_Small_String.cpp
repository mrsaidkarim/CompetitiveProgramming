#include <iostream>
#include <vector>


using namespace std;

int main()
{
	int	n;
	vector<int> tab;
	int j;

	cin >> n;
	tab.resize(n);
	for (int i = 0; i < n; i++)
	{
		string res = "   ";
		cin >> tab[i];
		j = 2;
		while (j >= 0)
		{
			if (tab[i] <= 27)
			{
				res[j] = char (97 + tab[i] - (j + 1));
				tab[i] = j;
			}
			else
			{
				res[j] = 'z';
				tab[i] -= 26;
			}
			j--;
		}
		cout << res << endl;
	}
	return (0);
}