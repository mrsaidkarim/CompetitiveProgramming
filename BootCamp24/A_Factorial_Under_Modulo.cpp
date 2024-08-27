#include <iostream>


using namespace std;

const int mod = 998244353;

long long	fact(int nbr)
{
	long long ans;

	ans = 1;
	for(int i = 2; i <= nbr; i++)
		ans = (ans * i) % mod;
	return (ans);
}

int main()
{
	int n;

	cin >> n;
	cout << fact(n);

	return (0);
}