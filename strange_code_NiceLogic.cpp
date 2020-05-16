// 1st Solution 
#include<iostream>
#include<math.h>
using namespace std;
typedef long long int ll;
int main() {
  ll n;
  cin >> n;
  ll index, val;
  ll first = 1;
  ll i = 0;
  for(i; i < n; i++) {
      ll next = first + 3*pow(2, i);
      if(next > n) {
        index = first;
        break;
      }
      first = next;
  }
  // cout << "index is " << index;
  val = 3*pow(2, i);
  // cout << val 
  // for(index; index < n; index++) 
  //   val--;
  val -= n - index;
  cout << val;
  return 0;
}

// // 2nd Solution 
// // Logic - index find kro and each time index increases value multiply by 2
// // But initial value = 3 => value *= 2
// // initial time = 1
// // increase in time i.e delta = 3 => delta *= 2

// #include<iostream>
// #include<math.h>
// using namespace std;
// typedef long long int ll;
// int main() {
//   ll time;
//   cin >> time;
//   ll t = 1;
//   ll value = 3;
//   ll delta = 3;
//   while(t + delta <= time) { // t + delta => index of 1st time i.e 1, 4, 10....
//     t += delta;
//     value *= 2;
//     delta *= 2;
//   }
//   value -= time - t;
//   cout << value;
// }
