#include <iostream>
#include <vector>
#include <limits>
#include <cmath>
using namespace std;

const long long mod = 1e9+7;
int last = 1e6+1;


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
// long long power(int x, unsigned int y, int p)
// {
//     long long res = 1;
//     x = x % p;
//     if (x == 0)
//         return 0;
//     while (y > 0) {
//         if (y & 1)
//             res = (res * x) % p;
//         y = y >> 1;
//         x = (x * x) % p;
//     }
//     return res;
// }


int main()
{
	int n;
	int a, b;
	vector<long long> facts(last);
	long long up;
	long long down;
	long long ans;

	cin >> n;
	facts[0] = 1;
	for(int i = 1; i < last; i++)
	{
		facts[i] = ((facts[i - 1] % mod) * (i % mod)) % mod;
	}
	for(int i = 0; i < n; i++)
	{
		cin >> a >> b;
		up = facts[a] % mod;
		down = (facts[b] * facts[a - b]) % mod;
		ans = (up * my_pow(down , mod - 2)) % mod;
		cout << ans << endl;
	}
	return (0);
}