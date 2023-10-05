#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
	set<int> tree;
	string opr;
	int num;
	
	while (cin >> opr)
	{
		cin >> num;
		if (opr == "insert")
			tree.insert(num);
		else if (opr == "delete")
			tree.erase(num);
		else if (opr == "exists")
		{
			if (tree.find(num) == tree.end())
				cout << "false" << endl;
			else
				cout << "true" << endl;
		}
	}
	return 0;
}
