#include <iostream>
#include <map>
#include <limits>
#include <cmath>
using namespace std;

const long long mod = 1000000007;


long long my_pow(long long a, long long b)
{
	long long ans = 1;
	while (b)
	{
		if (b % 2)
			ans = (ans * a) % mod;
		b /= 2;
		a = ((a % mod) * (a % mod)) % mod;
	}
	return (ans);
}

int main()
{
	int n,q;
	int a,b;

	cin >> n >> q;
	int tab[n];
	long long	mul[n];
	for(int j = 0; j < n; j++)
		cin >> tab[j];
	mul[0] = tab[0] % mod;
	for(int j = 1; j < n; j++)
		mul[j] = (tab[j] * mul[j - 1]) % mod;
	for(int i = 0; i < q; i++)
	{
		cin >> a >> b;
		b--;
		a -= 2;
		if (a == -1)
			cout << mul[b] << "\n";
		else
			cout << (mul[b] * my_pow(mul[a], mod - 2)) % mod << "\n";
	}
	return (0);
}