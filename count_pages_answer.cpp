#include <iostream>
using namespace std;
int main() {
  int n, p, count = 0, start;
  // cout << "enter num of pages ";
  cin >> n;
  // cout << "enter the page you want to find ";
  cin >> p;
  int div = n/2;
  if(div >= p) {
    for(int i = 1; i < div; i = i +2) {
      if(p == 1 || p == i || p == i - 1) {
        break;
      }
     count++;
    }
  }
  else {
    if(n % 2 == 0) {
      for(int i = n; i > div ; i -= 2) {
        if(p == n || p == i || p == i + 1)
          break;
        count ++;
      }
    }
    else {
      for(int i = n; i > div ; i -= 2) {
        if(p == n || p == i || p == i - 1)
          break;
        count ++;
      }
    }
  }
  cout << count;
  return 0;
}

// 2nd Solution
// int main () {
//   int n, p, count;
//   // cout << "enter num of pages ";
//   cin >> n;
//   // cout << "enter the page you want to find ";
//   cin >> p;
//   int div = n / 2;
//   if(div >= p) {
//     count = p/2;
//   }
//   else {
//     if(n % 2 == 0)
//       count = (n - p)/2;
//     else
//       count = ((n - p) + 1) /2;
//   }
//   cout << count;
//   return 0;
// }


// 3rd solution

    // int solve(int n, int p) {
    //     int total = n/2;
    //     int right = p/2;
    //     int left = total - right;
    //     if(right < left){
    //         return right;
    //     }
    //     else {
    //         return left;
    //     }
    // }