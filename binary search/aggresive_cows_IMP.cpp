#include<iostream>
#include<algorithm>
#include<limits.h>
using namespace std;
int n, c;
int cows(int arr[], int mid) {
  int pos = arr[0];
  int count = 1;
  for(int i = 1; i < n; i++) {
    if(arr[i] - pos >= mid) {
      pos = arr[i];
      count++;
    }
    if(count ==c)
      return 1;
  }
  return 0;
}
int binary(int arr[]) {
  int low = 0;
  int high = arr[n -1];
  int result = INT_MIN;
  while(low <= high) {
    int mid = low + (high - low)/2;
    if(cows(arr, mid) == 1) {
      result = result > mid ?result : mid;
      low = mid +1;
    }
    else
      high = mid -1;
  }
  return result;
}
int main() {
  cin >> n >> c;
  int arr[n];
  for(int i =0; i< n ; i++)
    cin >> arr[i];
  sort(arr, arr+n);
  int max = arr[n-1];
  cout << binary(arr) <<endl;
  return 0;
}