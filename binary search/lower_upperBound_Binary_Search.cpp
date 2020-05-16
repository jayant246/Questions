// lower and upper bound
// lower >= value {first value which is greater than or equal to that number}
// upper > value

#include<iostream>
using namespace std;
int lower(int arr[], int n, int x, bool flag) {
    int high = n -1;
    int low = 0;
    int mid;
    int result = -1;
    int temp;
    while(low <= high) {
        mid = (low + high)/2;
        if(flag) {
            if(arr[mid] < x) {
                low = mid +1;
            }
            else if(arr[mid] >= x){ // for lower bound
                result = mid;
                high = mid -1; 
            }
        }
        else {
            if(arr[mid] <= x) { // for upper bound
                low = mid +1;
            }
            else if(arr[mid] > x){
                result = mid;
                high = mid -1;
            }
        }
    }
    return result;
}
int main() {
    int arr[] = {1,1,2,2,3,4,4,4,7,9};
    int n = sizeof(arr)/sizeof(*arr);
    int x;
    cout << "enter element ";
    cin >> x;
    cout << "enter 1 for lower and 0 for upper bound ";
    bool flag;
    cin >> flag;
    int answ = lower(arr, n, x, flag);
    cout <<"answ is at index " << answ;
    return 0;
}
