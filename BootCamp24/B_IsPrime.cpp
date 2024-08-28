#include <iostream>
#include <unordered_map>
#include <limits>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long n;

	cin >> n;
	if (n == 0 || n == 1)
	{
		cout << "\"Not Prime\"\n";
		return (0);
	}
	for(int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << "\"Not Prime\"\n";
			return (0);
		}
	}
	cout << "\"Prime\"\n";
	return (0);
}