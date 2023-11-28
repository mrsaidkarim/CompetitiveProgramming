#include<iostream>
#include<cstring>
 
using namespace std;
 
int main(){
  int n;
  int i;
  int j;
  int x;
  int s;
  int d;
  int k;
 
  s = 0;
  d = 0;
  k = 1;
 
  cin >> n;
  int T[n];
 
  for(i = 0; i < n; i++)
    cin >> T[i];
  
 
  j = n-1;
  i = 0;
  while(i <= j){
    if(T[i] > T[j])
    {
      x = T[i];
      i++;
    }
    else
    {
      x = T[j];
      j--;
    }
    if(k % 2 != 0)
      s += x;
    else
      d += x;
    k++;  
  }
  cout << s << endl;
  cout << d << endl;
  return 0;
}
