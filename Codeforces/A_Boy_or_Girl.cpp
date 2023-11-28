#include<iostream>
#include<cstring>
 
using namespace std;
 
 
int main(){
  string s;
  int n;
  int k;
  int i;
  int j;
 
  k = 1;
  i = 1;
  cin >> s;
  n = s.length();
  char T[n] ;
  strcpy(T,s.c_str());
  while (i < n)
  {
    for(j = 0; j < i && T[i] != T[j]; j++);
    if(j < i)
    {
      i++;
    }
    else
    {
      i++;
      k++;
    }
  }
  if(k % 2 == 0)
    cout << "CHAT WITH HER!";
  else
    cout << "IGNORE HIM!";
  return 0;
}
