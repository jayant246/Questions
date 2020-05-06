#include <iostream>
#include <string.h>
using namespace std;

//using frequency
int main() {
  int arr[100], max = 0, n ;
  int freq[101] = {};  
    // cout << "enter num of elements ";
    cin >> n;
    // cout << "enter num now ";
    for(int i = 0 ; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }
    int count = 0;
    for(int i = 1; i < 100; i++) {
      count = freq[i] + freq[i + 1];  // freq[size] = size == 101, when i = 99 prblm
                                      // freq[100] not exist bcz size is 100
                                      // that's why size is 101
                                      // OR freq[i - 1] wouldd be better
      max = count > max ? count : max;
    }
    cout << max;
  return 0;
}

// another solution by sorting the array and then count the diff;


// #include <iostream>
// #include <string.h>
// // #include<iomanip>
// using namespace std;
// int main() {
//     int arr[100], max = 0, n, temp ; 
//     // cout << "enter num of elements ";
//     cin >> n;
//     // cout << "enter num now ";
//     for(int i = 0 ; i < n; i++) 
//         cin >> arr[i];
//     for(int i = 0; i < n - 1; i++) {
//         for(int j = 0; j < n - i -1; j++) {
//             if(arr[j] > arr[j + 1]) {
//               temp = arr[j];
//               arr[j] = arr[j + 1];
//               arr[j + 1] = temp;
//             }  
//         }
//     }
//     for(int i = 0; i < n - 1; i++) {
//         int count = 1;
//         for(int j = i + 1; j < n ; j++) {
//             if(abs(arr[i] - arr[j]) <= 1)
//                 count++;
//             // else
//             //     break;
//         }
//             max = count > max ? count : max;
//     }
//     cout << max;
//     return 0;
// }