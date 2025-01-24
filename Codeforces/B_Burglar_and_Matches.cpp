#include <iostream>
#include <map>

using namespace std;

int main()
{
	int n,m;
	int res = 0;
	map<int, int> containers;
	int tmp1, tmp2;

	cin >> n >> m;
	for(int i = 0; i < m; i++)
	{
		cin >> tmp1 >> tmp2;
		containers[tmp2] = tmp1;
	}
	while (n > 0)
	{
		auto max = containers.rbegin();
		res += max->first;
		max->second -= 1;
		if (max->second == 0)
			containers.erase(max->first);
		n--;
	}
	cout << res;
}