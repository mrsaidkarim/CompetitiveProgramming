#include<iostream>
#include<cstring>
 
using namespace std;
 
int main(){
  int n;
  string s;
  int i;
  int x;
 
  x = 0;
  cin >> n;
  char T[n];
  cin >> s;
  strcpy(T,s.c_str());
  for(i = 1; i < n; i++){
    if(T[i] == T[i-1])
      x++;
  }
  cout << x;
  return 0;
}
