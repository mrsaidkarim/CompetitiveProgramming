#include <iostream>
#include <unordered_map>
#include <limits>
#include <cmath>
using namespace std;

const long long mod = 1e9+7;

long long	fact(int nbr)
{
	long long ans;

	ans = 1;
	for(int i = 2; i <= nbr; i++)
		ans = (ans * i) % mod;
	return (ans);
}
long long power(long long x, long long y, long long p)
{
    long long res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

long long modInverse(long long a, long long p)
{
    return power(a, p - 2, p);
}

int main()
{
	string s;
	unordered_map<char, int> letters;

	cin >> s;
	for(int i = 0; i < s.length(); i++)
	{
		letters[s[i]]++;
	}
	int down = 1;
	for(auto l : letters)
		down = (down * fact(l.second)) % mod;
	cout << (fact(s.length()) * modInverse(down, mod)) %mod << endl;
	return (0);
}