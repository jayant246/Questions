#include<iostream>
#include<string.h>
using namespace std;
int jumpingOnClouds(int c[], int k, int n) {
    int e = 100;
    for(int i = k; i % n != 0; i = i + k) {  // jump start from 0 to cloud 'k' ahead
        e = e - (c[i % n] * 2 + 1);
    }
    e = e - (c[0] * 2 + 1); // We haven't calculated energy loss on reaching cloud 0
    						// which is first cloud, where our progrm terminates
    return e;
}

int main() {
	int n,k;
	cout << "enter number of clouds ";
	cin >> n;
	int c[n]; // declare array of size 'n';
	cout << "enter jump number ";
	cin >> k;
	cout << "enter clouds energy now ";
	for(int i =0; i < n; i++)
		cin >> c[i];
	int energy = jumpingOnClouds(c, k, n);
	cout << "energy loss is " << energy;
	return 0;
}

