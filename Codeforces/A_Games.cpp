#include<iostream>
 
using namespace std;
 
int main()
  {
    int i;
    int j;
    int n;
    int ans;
 
    ans = 0;
 
    cin >> n;
    int T1[n];
    int T2[n];
    for(i = 0; i < n; i++){
      cin >> T1[i];
      cin >> T2[i];
    }
    for(i = 0; i < n; i++)
      for(j = 0; j < n; j++)
      {
        if(T2[j] == T1[i])
          ans++;
      }
    cout << ans;
    return 0;
  }
