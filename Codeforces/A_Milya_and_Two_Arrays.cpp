#include <iostream>
#include <vector> 
#include <map>  
#include<math.h> 
using namespace std;

bool ft_check(vector<int> a, vector<int> b)
{
	map<int, int> map_a, map_b;

	for (int i = 0; i < a.size(); i++)
		map_a[a[i]]++;
	for (int j = 0; j < b.size(); j++)
		map_b[b[j]]++;
	if (min(map_a.size(), map_b.size()) == 1 && max(map_a.size(), map_b.size()) <= 2)
		return (false);
	return (true);
}

int main()
{
	int	n;
	int len;
	int tmp;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> len;
		vector<int> a(len),b(len);
		for (int j = 0; j < len; j++)
			cin >> a[j];
		for (int j = 0; j < len; j++)
			cin >> b[j];;
		if (ft_check(a, b))
			cout << "YES\n";
		else
			cout << "NO\n";
	}
}