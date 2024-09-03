#include <iostream>
#include <map>
#include <limits>
#include <cmath>
#include <vector>
using namespace std;

const long long mod = 1e9+7;
const int last = 1e6+1;

int	isPrime(int n)
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
	int n;
	int nbr;
	long long sum;
	vector<int> primes;
	
	cin >> n;
	for(int i = 2; i < last; i++)
	{
		if (isPrime(i))
			primes.push_back(i);
	}
	for(int i = 0; i < n; i++)
	{
		sum = 0;
		cin >> nbr;
		for(int k = 0; primes[k] <= nbr && k < primes.size(); k++)
			sum += primes[k] ;
		cout << sum << "\n";
	}
	return (0);
}