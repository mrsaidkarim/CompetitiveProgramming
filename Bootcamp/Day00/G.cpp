#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
	int n;
	int s;

	cin >> n >> s;
	map<int, int> mymap;
	for(int i = 0; i < n; i++)
	{
		int a;
		cin >> a;
		int x;
		x = s - a;
		if(mymap.count(x))
		{
			cout << mymap[x] + 1 << " " << i + 1 << endl;
			return 0;
		}
		mymap[a] = i;
	}
	cout << "IMPOSSIBLE" << endl;
	return 0;
}
