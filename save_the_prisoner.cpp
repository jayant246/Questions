#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;
int main() {
  int test,n, s, start, answ;
  cin >> test;
  while(test--) {
    cin >> n >> s >> start;
    answ = (s + start - 1) % n;
    if(answ)
        cout << answ <<endl;
    else
        cout << n << endl;
  }
  return 0;
}