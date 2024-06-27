#include <iostream>

using namespace std;


int main()
{
	int n;


	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int		lena;
		int		lenb;
		string	a;
		string	b;
		int		count;
		int		k = 0;

		cin >> lena;
		cin >> lenb;
		cin >> a;
		cin >> b;
		count = 0;
		for(int j = 0; j < lenb && k < lena; j++)
		{
			if (a[k] == b[j])
				k++;
		}
		cout << k << endl;
	}
	return (0);
}