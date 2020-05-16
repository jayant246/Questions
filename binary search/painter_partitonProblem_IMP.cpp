// Explanation on bookmarks(chrome)

#include<iostream>
#include<algorithm>
using namespace std;
// int tm(int arr[], int mid, int n, int p) {
//     int sum = 0;
//     int count = 1;
//     for(int i =0; i < n; i++) {
//         sum += arr[i];
//         if(sum > mid) {
//             count++;
//             sum = 0;
//             i--;
//         }
//         if(count > p)
//             return -1;
//     }
//      return mid;   
// }
int tm(int arr[], int mid, int n) {
    int sum = 0;
    int count = 1;
    for(int i =0; i < n; i++) {
        if(sum + arr[i] <= mid) {
            sum += arr[i];
        }
        else {
            count++;
            sum = arr[i];
        }
    }
    return count;
}
int binary(int arr[], int sum, int max, int n, int p) {
    int low = max; 
    int high = sum;
    int result = sum +1;;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(tm(arr, mid, n) <= p){
            result = result < mid ? result : mid;
            high = mid -1;
        }
        else 
            low = mid +1;
    }
    return result;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int p, n;
        cin >> p >> n;
        int arr[n +1];
        int sum = 0;
        for(int i =0; i < n; i++) {
            cin >> arr[i];
            sum += arr[i];
        }
    // sort(arr, arr+n);
    int max = *max_element(arr, arr+n); // max element of array
    cout << binary(arr, sum, max, n, p) <<endl;
    }
    return 0;
}


// sorting is not to be done => bcz the painter have to paint continuously i.e
// the given 10 20 30 40 are lengths of board having no. 1 2 3 4 either a painter paints
// board 1 2 3 4 or 1 2 3 or 1 2 or 1 only. So, sorting disturb the pattern of painting
// boards continuosly
