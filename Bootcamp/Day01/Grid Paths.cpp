#include<iostream>
#include<vector>

typedef long long ll;
const int mod = 1e9+7;

using namespace std;

int	main()
{
	int			n;
	
	cin >> n;
	vector<string>		grid(n);
	vector<vector<ll>>	paths(n, vector<ll>(n, 0));
	for (int i = 0; i < n; i++)
		cin >> grid[i];
	paths[0][0] = (grid[0][0] == '.');
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (grid[i][j] != '*')
			{
				if (i)
					paths[i][j] = (paths[i][j] + paths[i-1][j]) % mod;
				if (j)
					paths[i][j] = (paths[i][j] + paths[i][j-1]) % mod;
			}
		}
	}
	cout << paths[n-1][n-1];
}
