#include<iostream>
#include<algorithm>
using namespace std;
int prata(int arr[], int n, int prata,int time) {
  int num = 0;
  for(int i=0; i < n; i++) {
    int t = 0;
    int temp = arr[i];
    while(t + temp <= time) {
      num++;
      t += temp;
      temp += arr[i];
      if(num >= prata)
        return time;
    }
  }
  return -1;
}
int binary(int arr[], int n, int p) {
  int low =0;
  int high = arr[n-1]*(p*(p+1))/2;
  int result;
  while(low <= high) {
    int mid = low + (high - low)/2;
    if(prata(arr, n, p, mid) == -1)
      low = mid +1;
    else {
      high = mid -1;
      result = mid;
    }
  }
  return result;
}
int main() {
  int t;
  cin >>t;
  while(t--) {
    int p;
    cin >> p;
    int n;
    cin >>n;
    int arr[n];
    for(int i =0; i < n; i++)
      cin >> arr[i];
    cout << binary(arr, n, p) << endl;
  }
  return 0;
}
