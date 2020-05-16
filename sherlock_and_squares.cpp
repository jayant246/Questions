#include <iostream>
#include <string.h>
#include<math.h>
using namespace std;
int main() {
	int n, a, b;
	cout << "number of inputs ";
	cin >> n;
	while(n--) {
		cout << "enter two numbers now ";
		cin >> a >> b;
		int count = 0;
		for(a; a <=b; a++) {
			int i = sqrt(a); // sqrt gives a 'double' value but it 'ceils' to integer
			if(i == sqrt(a)) {
				count++;
				a += 2*i;   // diff between two square no. [refer at last]
							// yaha se nikalne k baad (a++) increment krega
			}
		}
		cout << count << endl;
	}
	return 0;
}

/*1 4 9 16 25 36 49 64
   diff b/w two square no. is sqrt(n)*2 +n;
   let, n = 4 => 2*2 + 4  => 8 (which is the diff)				*/