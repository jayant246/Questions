#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int arr[10000], n, k, q; // n= elements, k = rotation, q = how many numbers search
	cin >> n >> k >> q;
	k = k % n; // this is impt
	for(int i = 0; i < n; i++)
		cin >> arr[i];
    int m;
    for(int i = 0; i < q; i++) {
    	cin >> m;
    	if(m >= k) 
    		cout << arr[m - k] <<endl;
    	else
    		cout << arr[(n - k) + m] <<endl;  // 'k' is already moded;
    }
    return 0;
}