#include<iostream>
#include<cstring>
 
using namespace std;
 
int main(){
  int a;
  int b;
  int x;
  int n;
  int i;
  
  x = 1;
 
  cin >> n;
  cin >> a;
  for(i = 1; i < n; i++){
    cin >> b;
    if(a != b)
      x++;
    a = b;
  }
  cout << x;
  return 0;
}

