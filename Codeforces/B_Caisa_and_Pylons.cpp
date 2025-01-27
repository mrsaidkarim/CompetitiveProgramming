#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	int n;
	int max;
	int old = 0;
	int res = 0;
	cin >> n;
	vector<int> heights(n);
	for (int i = 0; i < n; i++)
		cin >> heights[i];
	max = *max_element(heights.begin(), heights.end());
	for (int i = 0; i < n; i++)
	{
		res += old - heights[i];
		old = heights[i];
		if (heights[i] == max)
			break;
	}
	if (res >= 0)
		cout << 0;
	else
		cout << -res;
}