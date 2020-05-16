// pivot property => element before that pivot is greater than the pivot element
// if our low is <= high {values} it means its not rotated and elements present at its original position
// if mid element is less than the high than the right part is sorted => select left part and vice-versa
// **Base Condition is :- Array must be sorted and no duplicate elements are present

#include<iostream>
using namespace std;
int pivot(int arr[], int n) {
    int low = 0;
    int high = n -1;
    while(low <= high) {
        int mid = (high + low)/2;
        if(arr[low] <= arr[high])
            return low;
        else if(arr[mid] < arr[mid -1])
            return mid;
        else if (arr[mid] <= arr[high])
            high =  mid-1;
        else 
            low = mid +1;
    }
    return -1;
}
int main() {
    int arr[] = {13, 14, 15,2, 3, 4, 5, 9, 10, 11, 12};
    int n = sizeof(arr)/sizeof(*arr);
    int answ = pivot(arr, n);
    if(answ == -1)
        cout << "no pivot";
    else
        cout << "pivot is " << arr[answ] << " and rotation is " << answ ;
    return 0;
}
