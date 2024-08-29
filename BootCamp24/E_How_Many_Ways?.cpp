#include <iostream>
#include <unordered_map>
#include <limits>
#include <cmath>
using namespace std;

const long long mod = 1e9+7;


long long my_pow(long long a, long long b)
{
	long long ans = 1;
	while (b)
	{
		if (b % 2)
			ans = (ans % mod * a) % mod;
		b /= 2;
		a = ((a % mod) * (a % mod)) % mod;
	}
	return (ans);
}

int main()
{
	long long n;

	cin >> n;
	cout << my_pow(3, n)<< endl;
	return (0);
}