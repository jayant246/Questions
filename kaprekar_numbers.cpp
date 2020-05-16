#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main() {
     int temp, p, q,flag = 0;
     cin >> p >> q;
    for(int i = p; i <= q; i++) {
        int d = 0;
        int r, l;
        temp = i;
        while(temp) {
            temp = temp/10;
            d++;
        }
        long long val = pow(i, 2); // long long bcz square of 99999 is big, without it
                                   // cant't be solved
        r = (val) % int (pow(10, d));  // if num = 25 (2 digit) => 625 % 100 => 25

        l = ((val) - r)/int (pow(10, d)); // (625 - 25)/ 100 => 6
        if(r+l == i) {
            cout << i <<" ";
            flag = 1;
        }
    }
    if(flag ==0) 
        cout <<"INVALID RANGE";
    return 0;
}