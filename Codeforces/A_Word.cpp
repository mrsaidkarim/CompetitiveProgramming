#include<iostream>
#include<cstring>
 
using namespace std;
 
int main(){
  string s;
  int a;
  int b;
  int n;
  int i;
  a = 0;
  b = 0;
 
  cin >> s;
  n = s.length();
  char T[n];
  strcpy(T , s.c_str());
  for(i = 0; i < n; i++){
    if(int(T[i]) > 96)
      a++;
    else
      b++;
  }
  if(a < b)
    for(i = 0; i < n; i++){
      if(int(T[i]) > 96)
        T[i] = char(int(T[i])-32);
    }
  else
    for(i = 0; i < n; i++){
      if(int(T[i]) < 91)
        T[i] = char(int(T[i])+32);
    }
  cout << T;
  return 0;
}
