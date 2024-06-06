#include <iostream>

using namespace std;


int main()
{
	int n;
	int	size;


	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int tmp = INT_MAX;
		cin >> size;
		int tab[size];
		for(int j = 0; j < size; j++)
			cin >> tab[j];
		for(int j = 0; j < size - 1; j++)
		{
			if (tab[j] >= tab[j + 1] && tab[j] < tmp + 1)
				tmp = tab[j] - 1;
			else if (tab[j + 1] >= tab[j] && tab[j + 1] < tmp + 1)
				tmp = tab[j + 1] - 1;
		}
		cout << tmp << endl;
	}
	return (0);
}