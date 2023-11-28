#include<iostream>
 
using namespace std;
 
int main(){
  string s;
  int i;
  int c;
  int T[4];
 
  c = 0;
 
  for(i = 0; i < 4; i++)
    cin >> T[i];
  cin >> s;
  for(i = 0; i < s.length(); i++){
    c += T[int(s.at(i)) - 49];
  }
  cout << c;
  return 0;
}
