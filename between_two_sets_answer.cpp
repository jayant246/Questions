#include <iostream>
#include <string.h>
using namespace std;
int gcd(int a, int b) {
    while(a != b) {
        if(a > b)
            a -= b;
        else 
            b -= a;
    }
    return b;
}
int lcm(int a, int b) {
    int i = a > b ? a : b;
    while(i <= a * b) {
        if(i % a ==0 && i % b == 0)
            break;
        i++;
    }
    return i;
}
int main() {
    int m, n, i, a[100], b[100], count = 0 ;
    cin >> n >> m;

    //input
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < m; i++)
        cin >> b[i];

    // calculation of LCM
    int resultLCM = a[0];
    for(int i = 1; i < n ; i++) {
        resultLCM = lcm(a[i], resultLCM);
    }

    // calculation of GCD
    int resultGCD = b[0];
    for(int i = 0; i < m - 1; i++) {
        resultGCD = gcd(b[i + 1], resultGCD);
    }

    //calculation of num count
    int temp = resultLCM;
    while(resultLCM <= resultGCD) {
        if(resultGCD % resultLCM == 0)
            count ++;
        resultLCM += temp;
    }

    //answ
    cout << count;
    return 0;
}