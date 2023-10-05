#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	int op;
	int num;
	vector<int> stack;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> op;
		if (op == 1)
		{
			cin >> num;
			stack.push_back(num);
		}
		else if (op == 2)
		{
			if (!stack.empty())
				stack.pop_back();
		}
		else if (op == 3)
		{
			if (stack.empty())
				cout << "empty" << endl;
			else
				cout << stack.back() << endl;
		}
	}
	return 0;
}