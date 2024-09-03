#include <iostream>
#include <map>
#include <limits>
#include <cmath>
#include <vector>
using namespace std;

const long long mod = 1e9+7;

int	isPrime(long long n)
{
	if (n == 0 || n == 1)
		return (0);
	for(int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
			return (0);
	}
	return (1);
}

int main()
{
	int nbrs;
	long long n;
	long long s;
	vector<int> facts;
	
	cin >> nbrs;
	int i;
	for(int j = 0; j < nbrs; j++)
	{
		cin >> n;
		s = sqrt(n);
		if (s * s == n && isPrime(s))
				cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return (0);
}