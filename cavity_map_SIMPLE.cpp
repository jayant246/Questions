#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    char str[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> str[i][j];
        }
    }
    for(int i = 1; i < n-1; i++) {
        for(int j = 1; j< n-1; j++) {
            int temp = str[i][j];
            if(temp > str[i -1][j]  && temp > str[i][j-1]  && temp > str[i+1][j] && temp > str[i][j+1]) {
                str[i][j] = 'X';
            }
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << str[i][j];
        }
        cout << endl;
    }
    return 0;
}