#include <iostream>
#include <string>
#include <stack>

using namespace std;

bool correct(string str)
{
	stack<char> s;
	for(char c: str)
	{
		if(c == '(' || c == '[')
			s.push(c);
		else if(c == ')' || c == ']')
		{
			if(s.empty())
				return false;
			if((c == ')' && s.top() == '(') || (c == ']' && s.top() == '['))
				s.pop();
			else
				return false;
		}
	}
	return true;
}

int main()
{
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (correct(s))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
