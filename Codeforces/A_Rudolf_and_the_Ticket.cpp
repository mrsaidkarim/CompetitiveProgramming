#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int	n;
	vector<int> tab;
	int	len1;
	int	len2;
	int	s;
	int	res;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		res = 0;
		cin >> len1;
		cin >> len2;
		cin >> s;
		vector<int> lpocket(len1);
		vector<int> rpocket(len2);

		for (int k = 0; k < len1; k++)
			cin >> lpocket[k];
		for (int j = 0; j < len2; j++)
			cin >> rpocket[j];
		for(int k = 0; k < len1; k++)
		{
			for(int j = 0; j < len2; j++)
			{
				if (lpocket[k] + rpocket[j] <= s)
					res++;
			}
		}
		cout << res << endl;
	}
	return (0);
}