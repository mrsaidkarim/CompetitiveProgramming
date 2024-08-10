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
		int a1,a2,b1,b2;
		cin >> a1 >> a2 >> b1 >> b2;
		int sunset_win = 0;
		sunset_win += (a1 > b1 && a2 > b2) || (a1 == b1 && a2 > b2) || (a1 > b1 && a2 == b2);
		sunset_win += (a1 > b2 && a2 > b1) || (a1 == b2 && a2 > b1) || (a1 > b2 && a2 == b1);
		sunset_win += (a2 > b1 && a1 > b2) || (a2 == b1 && a1 > b2) || (a2 > b1 && a1 == b2);
		sunset_win += (a2 > b2 && a1 > b1) || (a2 == b2 && a1 > b1) || (a2 > b2 && a1 == b1);
		cout << sunset_win << endl;
	}
}