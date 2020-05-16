#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t ;
    while(t--) {
        int n;
        cin >> n;
        char b[100];
        int freq[100] = {};
        int flag = 0;
        int sum = 0;
        // taking input and calculating frequency of 
        for(int i = 0; i < n; i++) {
            cin >> b[i];
            freq[b[i]]++;
            if(int (b[i]) != 95)
                sum++;
        }
        //calculating frequency of all alphabets are greater than 2
        for(int i =0; i < n; i++) {
            if(int (b[i]) != 95) {
                if(freq[b[i]] >= 2) {
                    flag = 1;
                }
                else {
                    flag = 0;
                    break;
                }
            }
        }   
            if(sum == 0) // only '_' exist in the string
                cout << "YES" <<endl;
            else if(freq[95] == 0 && flag == 1) {
                    int count = 0;
                    for(int i = 0; i < n-1; i++) {
                        if(b[i] == b[i+1]) 
                            count++;
                        if(b[i] != b[i+1]) {
                            if(count ==0) {
                                cout << "NO" << endl;
                                count = 0;
                                break;
                            }    
                            else
                                count = 0;
                        }
                    }
                    if(count >=1)
                        cout << "YES" << endl;           
            }
            else if(flag == 1 && freq[95] >0)
                cout << "YES" <<endl; // string with '_' exist 
            else if(flag == 0)
                cout << "NO" <<endl;
            else
                cout << "NO" <<endl;
    }
    return 0; 
}
