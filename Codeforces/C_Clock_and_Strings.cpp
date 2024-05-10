#include <iostream>
#include <string>   
#include <algorithm>
#include <vector>

using namespace std;

int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return (b);
}

int min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

int main()
{
	int	n;

	cin >> n;
	for(int i = 0; i < n; i++)
	{
		vector<int> time1;
		vector<int> time2;
		int sum=0;
		for(int j = 0; j < 4; ++j){
			int s=time1.size();
			int t;
			cin >> t;
			if(s>2)time2.push_back(t);
			else time1.push_back(t);
			sum+=t;
		}
		if(sum>=24) cout<<"YES"<<endl;
		else{
			if(min(time1[0], time1[1])>min(time2[0], time2[1]) && max(time1[0], time1[1])>max(time2[0], time2[1])) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}