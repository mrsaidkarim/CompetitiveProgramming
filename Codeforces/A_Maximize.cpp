#include <iostream>

using namespace std;


int	gcd(int x, int y)
{
	int gcd;

	gcd = 1;
	for (int i = 1; i <= (x < y ? x : y); i++)
	{
		if (x % i == 0 && y % i == 0)
			gcd = i;
	}
	return (gcd);
}

int main()
{
	int n;


	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int max;
		int	index;
		int nbr;
		cin >> nbr;
		max = 0;
		index = -1;
		for(int j = 1; j < nbr; j++)
		{
			if ((j + gcd(j, nbr)) <= nbr)
				index = j;
		}
		cout << index << endl;
	}
	return (0);
}