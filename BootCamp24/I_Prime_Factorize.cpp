#include <iostream>
#include <map>
#include <limits>
#include <cmath>
#include <vector>
using namespace std;

const long long mod = 1e9+7;

vector<int>	factorize(int n)
{
	vector<int> facts;
	int i = 2;
	while (n > 1)
	{
		if (n % i == 0)
		{
			n /= i;
			facts.push_back(i);
		}
		else
		{
			if (i % 2)
				i += 2;
			else
				i++;
		}
	}
	return (facts);
}

int main()
{
	int n;
	
	cin >> n;
	vector<int> facts = factorize(n);
	cout << n << ":";
	for(int i = 0; i < facts.size(); i++)
	{
		cout << " ";
		cout << facts[i];
	}
	cout << "\n";
	return (0);
}