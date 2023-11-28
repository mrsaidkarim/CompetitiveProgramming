#include<iostream>
#include<cstring>
 
using namespace std;
 
int main(){
	int n;
	cin >> n;
 
	int T[n];
	for(int i = 0; i < n; i++)
		cin >> T[i];
	int max,m;
	max = 0;
	for(int i = 0; i < n; i++){
		int j;
		j = i;
		m = 1;
		while(T[j] >= T[j-1]){
			m++;
			j--;
		}
		j = i;
		while(T[j] >= T[j+1]){
			m++;
			j++;
		}
		if(max < m)
			max = m;
	}
    cout << max;
	return 0;
}
