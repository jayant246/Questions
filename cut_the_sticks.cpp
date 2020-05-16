// 1st Solution (finding min at each position , until min ==0)
// and subtract the values of array from it

#include <iostream>
#include<math.h>
using namespace std;
int min(int arr[], int n) {
	int min = 100000, flag = 0;
	for(int i = 0; i < n ; i++) {
		if(arr[i] > 0){
			if(arr[i] < min){
				min = arr[i];
				flag = 1;
			}
		}
	}
	 if(flag)
	 	return min;
	return 0;
}
int main() {
	int n, arr[1000];
	cout << "no. of inputs ";
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int m = min(arr, n);
	// cout << "min is " << m << endl;
	while(m) {
		int count = 0;
		for(int i =0; i< n; i++) {
			if(arr[i] - m >=0)
				count++;
			arr[i] -= m;
		}
		if(count)
			cout << count << endl;
		m = min(arr, n);
		// cout << "min is " << m << endl;
	}
	return 0;
}

// 2nd Solution

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main(void) {
//     int N; 
    
//     cin >> N;           // Taking the number of elements from user's input.
    
//     int Array[N];
    
//     for (int i = 0; i < N; i++) 
//         cin >> Array[i];            // Taking all elements in to our Array.
    
//     sort(Array, Array + N);         // Sorting list from minimum to maximum.[STL]
    
//     cout << N << endl;  // **Printing the number of our elements since our output will start with number of the full list.
//     for (int i = 0; i < N-1; i++)       
//         if (Array[i] != Array[i+1])     
//             cout << N-(i+1) << endl; // Printing our output by subtracting number of smallest item/items from our lenght of array.                    
//     return 0;
// }