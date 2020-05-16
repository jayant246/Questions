// The main aim of this problem is to shift the odd element until all elements become
// even and shifting is done by adding +1 to each odd and next element (2 breads)
// 2 3 4 5 => 2 4 5 5 => 2 4 6 6 (and done)

#include<iostream>
using namespace std;
int main() {
    int n, count = 0;
    cin>> n;
    int arr[n], odd[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] % 2 != 0)  {  // here we count no of odd elements
            odd[count] = i;
            count++;
        }        
    }
    int sum =0;
    if(count % 2 == 0) {        // if total odd elements are even in number then only our process will start
        for(int i = 0; i < count; i = i+2) {
            sum += odd[i+1] -  odd[i];
        }
        cout << sum *2; // multiply by 2 because we distribute only one bread to 
                        // each person but 2 breads are distributed aa time
    }
    else
        cout << "NO";
    return 0;
}

// 2nd solution (if sum of all elements are even then only bread will be distributed)
// int main() {
//     int n, count = 0;
//     int sum = 0;
//     cin>> n;
//     int arr[n], odd[n];
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//         sum += arr[i]; // sum of all elements
//     }
//     if(sum % 2 == 0) {
//         for(int i =0; i < n; i++) {
//             if(arr[i] % 2 != 0) {
//                 arr[i]++;
//                 arr[i+1]++;
//                 count += 2;
//             }
//         }
//         cout << count;
//     }
//     else
//         cout << "NO";
//     return 0;
// }

