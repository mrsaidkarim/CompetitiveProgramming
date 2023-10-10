#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string, int> words;
	
	for(int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		words[s]++;
	}
	int maxf = 0;
	string maxw = "";
	for(const auto& w : words)
	{
		if((w.second > maxf) || (w.second == maxf && w.first > maxw))
		{
			maxf = w.second;
			maxw = w.first;
		}
	}
	cout << maxw << " " << maxf << endl;

	return 0;
}
