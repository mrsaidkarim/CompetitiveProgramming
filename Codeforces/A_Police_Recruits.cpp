#include<iostream>
 
using namespace std;
 
int main(){
  int n;
  int i;
  int x;
  int a;
 
  x = 0;
  a = 0;
  cin >> n;
  int T[n];
  for(i = 0; i < n; i++)
    cin >> T[i];
  for(i = 0; i < n; i++){
    if(T[i] != -1)
      x += T[i];
    else
    {
      if(x == 0)
        a++;
      else
        x--;
    }
  }
  cout << a;
  return 0;
}
