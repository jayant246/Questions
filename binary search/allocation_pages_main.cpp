// Allocate minimum number of Pages

#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

bool isValid(vector <int> arr,int value, int m){
	int stud = 1, sum = 0;
	for(int itr : arr){
		sum += itr;
		if(sum > value){
			stud++;
			sum = itr;
		}
		if(stud > m)
			return false;
	}
	return true;
}
int calculate(vector <int> arr,int low, int high, int m){
	int result = -1;
	if(m > arr.size())
		return result;
	while(low <= high){
		int mid = low + (high-low)/2;
		if(isValid(arr,mid,m)){
			result = mid;
			high = mid-1;
		}
		else
			low = mid+1;
	}
	return result;
}
int main(){
	// number of books
	vector <int> arr = {10,20,30,40};

	// number of students
	int m = 3;
	int sum = 0, max = INT_MIN;
	for(int itr : arr){
		sum += itr;
		max = max > itr ? max : itr;
	}
	int low = max;
	int high = sum;
	int ans = calculate(arr,low,high,m);
	cout << ans;
	return 0;
}