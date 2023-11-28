#include<iostream>
 
using namespace std;
 
int main()
{
  string s;
  int i;
  int r;
  int j;
  int k;
  char c;
  char T[26];
 
  r = 0;
  c = 'a';
 
  for(i = 0; i < 26; i++){
    T[i] = c;
    c++;
  }
  cin >> s;
  j = 0;
  for(k = 0; k < s.length(); k++)
  {
      for(i = 0; i < 26 && T[i] != s.at(k); i++);
      if(i != 26)
      { 
        if(abs(j-i) < 13)
          r += abs(j-i);
        else
        {
          if(i < j)
            r += 26 - j + i;
          else
            r += 26 - i + j;
        }
        j = i;
      }
  }
  cout << r;
  return 0;
}

