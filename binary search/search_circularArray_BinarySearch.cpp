#include<iostream>
using namespace std;
int pivot(int arr[], int n, int x) {
    int low = 0;
    int high = n -1;
    while(low <= high) {
        int mid = (high + low)/2;
        if(arr[mid] == x)
            return mid;
        else if(arr[mid] <= arr[high]) {
            if(x > arr[mid] && x <= arr[high])
                low = mid +1;
            else
                high = mid -1;
        }
        else if(arr[mid] >= arr[low]) {
            if(x >= arr[low] && x< arr[mid])
                high = mid -1;
            else
                low = mid +1;
        }
    }
    return -1;
}
int main() {
    int arr[] = {10, 11, 12, 13, 2, 5, 6};
    int n = sizeof(arr)/sizeof(*arr);
    cout << "enter the element you want to search ";
    int x;
    cin >> x;
    int answ = pivot(arr, n, x);
    if(answ == -1)
        cout << "no pivot";
    else
        cout << "answ is  " << answ ;
    return 0;
}
