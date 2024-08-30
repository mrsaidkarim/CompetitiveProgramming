#include <iostream>
#include <map>
#include <limits>
#include <cmath>
using namespace std;

const long long mod = 1e9+7;


int	isPrime(int n)
{
	for(int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}
int main()
{
	int n, m;
	map<int, int> primes;
	int abs = 1;

	cin >> m >> n;
	for(int i = m; i < n + 1; i++)
		if (isPrime(i))
		{
			abs = 0;
			cout << i << endl;
		}
	if (abs)
		cout << "Absent" << endl;
	return (0);
}