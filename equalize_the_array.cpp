#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int main() {
    int n, arr[100], freq[101] = {};
    cout << "enter number of inputs ";
    cin >>n;
    cout << "enter inputs now ";
    for(int i =0; i < n; i++) {
        cin>> arr[i];
        freq[arr[i]]++;
    }
    int val = *max_element(arr, arr+n);
    cout << val;
    int max = *max_element(freq, freq+val+1);
    int sum = 0;
    if(max == 1) {
        for(int i = 0; i <= val; i++)
            sum = sum + freq[i];
        if(sum > 1)
            sum--;
        else
            sum = 0;
    }
    else {
        for(int i = 0; i <= val; i++){
            sum = sum + freq[i];
        }
        sum -= max;
    }    
    cout << sum;
    return 0;
}

// 78
// 24 29 70 43 12 27 29 24 41 12 41 43 24 70 24 100 41 43 43 100 29 70 100 43 41 27
// 70 70 59 41 24 24 29 43 24 27 70 24 27 70 24 70 27 24 43 27 100 41 12 70 43 70 
// 62 12 59 29 62 41 100 43 43 59 59 70 12 27 43 43 27 27 27 24 43 43 62 43 70 29

// output is 63