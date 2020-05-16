// using 4 for-loops
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int arr[50], answ[50], n;
    cin >> n;;
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[arr[j] - 1] == i) {
                // cout << "value of j is " << j;
                answ[i - 1] = j + 1;
            }
        }
    } 
    for(int i = 0; i < n; i++)
        cout << answ[i] << " ";
    return 0;
}

// using 2 for loops [better solution]
#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int n, a[51], b[51];
    cout << "how many number you want to enter ";
    cin >> n;
    for(int i = 1; i<=n; i++) {
        cin >> a[i];   // a[i] m jaega vo element, so 'i' represent krega vo index 
        b[a[i]] = i;   // jisme vo element gaya h
    }
    for(int i = 1; i<=n; i++)
        cout << b[i] << " ";
    return 0;
}

