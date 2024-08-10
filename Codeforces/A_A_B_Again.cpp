#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main()
{
	int	n;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int	nbr;
		cin >> nbr;

		cout <<	nbr / 10 + nbr % 10 << endl;
	}
}