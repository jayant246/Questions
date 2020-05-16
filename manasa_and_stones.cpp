// there is pattern in answer i.e first no, first + abs(a - b) .........

#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main() {
  int t;
  cin >> t;
  while(t--) {
    int n, a, b;
    cin >> n >> a >> b;
    int first = (n-1)* min(a, b);
    int last = (n-1)* max(a, b);
    cout << first << " "; // we print first here bcz when a== b then a-b == 0
                          // then an infinite loop will run and compiler shows run time error
      while(first < last) {
        cout << first << " ";
        first += abs(a-b);
      }
  }
  return 0;
}

// there is a pattern in the solution if n = 4, a = 10 & b = 100 => 30, 120, 210, 300
// coefficient => Ca or Cb
// 30 => 10*3 + 100*0 (Ca + Cb = (n-1) =>3)
// 120 => 10*2 + 100*1
// 210 => 10*1 + 100*2
// 300 => 10*0 + 100*3
// pattern = i*a + (n -1 -i)*b (a >b)

// #include<iostream>
// #include<algorithm>
// #include<math.h>
// using namespace std;
// int main() {
//   int t;
//   cin >> t;
//   while(t--) {
//     int n, a, b;
//     cin >> n >> a >> b;
//     int x = a;
//     int y = b;
//     a = max(x, y);
//     b = min(x, y);
//     if(a == b) 
//       cout << (n-1)*a;
//     else {
//       for(int i =0; i < n; i++) {
//         cout << (i*a + (n -1 -i)*b) << " ";
//       }
//     }
//   }
//   return 0;
// }