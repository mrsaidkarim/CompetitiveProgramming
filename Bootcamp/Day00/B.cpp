#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int tmp;

	cin >> n;
	vector<int> cols(n);
	
	for (int i = 0; i < n; i++)
		cin >> cols[i];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (cols[j] > cols[j + 1])
			{
				tmp = cols[j];
				cols[j] = cols[j+1];
				cols[j+1] = tmp;
			}
		}
	}
	for (int i = 0; i < n; i++)
		cout << cols[i] << " ";
	cout << endl;
	return 0;
}
