// Roti Prata

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// return number of pratas made in given minute of time
int prataNumber(int n, int min){
	int prata = 0;
	int temp  = n;
	while(n <= min){
		prata++; 
		n += temp*(prata+1);
	}
	return prata;
}

// check whether it is valid to make desired pratas in particular minute of time('value')
bool isValid(vector <int> arr,int value, int p){
	int counter = 0;
	for(int i = 0; i<arr.size();i++){
		counter += prataNumber(arr[i], value);
		if(counter >= p)
			return true;
	}
	return false;
}

// to calculate the minimum time to make desired number of pratas
int calculate(vector <int> arr, int low, int high,int p){
	int result = -1;
	while(low <= high){
		int mid = low + (high-low)/2;
		if(isValid(arr,mid,p)){
			result = mid;
			high = mid-1;
		}
		else
			low = mid+1;
	}
	return result;
}
int main(){
	vector <int> arr = {1, 1, 1, 1, 1, 1, 1, 1};
	int p = 8;
	int max = arr[arr.size()-1];

	// first chef takes minimum time. So, low is first chef's time.
	int low = arr[0];

	// high is the time when we give pratas to the chef which takes maximum time i.e last chef
	int high = max*(p*(p+1))/2;
	int ans = calculate(arr,low,high,p);
	cout << ans;
	return 0;
}