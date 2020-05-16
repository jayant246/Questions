// Inversion Count
#include <iostream>
using namespace std;
long int merge(int arr[], int p, int mid, int q) {
	long int answ = 0;
	int n1 = mid -p +1;
	int n2 = q - mid;
	int left[n1], right[n2];
	for(int i =0; i< n1; i++)
		left[i] = arr[p+i];
	for(int j =0; j < n2; j++)
		right[j] = arr[mid+j+1];
	int i = 0;
	int j = 0;
	int k = p;
	while(i < n1 && j<n2) {
		if(left[i] <= right[j]) {
			arr[k] = left[i];
			i++;
		}
		else {
			arr[k] = right[j];
			j++;
			answ += mid-(p + i)+1;
			// cout << "answ is " << answ << endl;
		}
		k++;
	}
	while(i < n1) {
		arr[k] = left[i];
		k++;
		i++;
	}
	while(j < n2) {
		arr[k] = right[j];
		k++;
		j++;
	}
	return answ;
}
long int sort(int arr[], int p, int q) {
	long int answ =0;
	if(p < q) {
		int mid = p+ (q - p)/2;
		answ +=sort(arr, p , mid);
		answ +=sort(arr , mid +1, q);
		answ += merge(arr, p, mid, q);
	}
	return answ;
}
int main() {
  	int t;
  	cin >> t;
  	while(t--) {
	  	int n;
	    cin >> n;
	    int arr[n]; 
	    for(int i=0; i < n; i++)
	        cin >> arr[i];
	    int p = 0;
	    int q = n -1;
	    long int answ = sort(arr,p,q);
	    // for(int i =0; i < n; i++)
	    //     cout << arr[i] << " ";
	    cout <<answ <<endl;
  	}
    return 0;
}