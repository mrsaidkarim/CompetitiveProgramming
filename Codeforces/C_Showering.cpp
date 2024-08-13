#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;


int main()
{
	int	nbr;

	cin >> nbr;
	for(int i = 0; i < nbr; i++)
	{
		int n,s,m;
		int res = 0;
		int start, end, lastend;
		cin >> n >> s >> m;
		cin >> start >> lastend;
		if (start >= s)
			res = 1;
		for(int j = 0; j < n - 1; j++)
		{
			cin >> start >> end;
			if (start - lastend >= s)
				res = 1;
			lastend = end;
		}
		if (m - lastend >= s)
			res = 1;
		if (res)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}