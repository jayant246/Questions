#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n, k, arr[10000], freq[10000] ={};
    cin >> n >> k;
    // Calculating Frequency of remainders
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i] % k]++;
    }
    int res = 0;
    res += min(freq[0], 1); // we have to take only 1 num which gives rem 0 

    if(k % 2== 0) 
        freq[k/2] = min(freq[k/2], 1);   // if 'k' is even and we take two number then
                                        // their half , adds to equal that number
    for(int i = 1; i <= k/2; i++) {
        res += max(freq[i], freq[k -i]);
    }
    cout << res;
    return 0;
}

/*We can solve this problem by computing modulo of array numbers with K. 
 if sum of two numbers is divisible by K, then if one of them gives remainder i,
 other will give remainder (K – i). First we store frequencies of numbers giving
  specific remainder in a frequency array of size K. Then we loop for all remainders
   i and include max(f[i], f[K – i]). Why? a subset with no pair sum divisible by K 
   must include either elements with remainder f[i] or with remainder f[K – i]. 
   Since we want to maximize the size of subset, we pick maximum of two sizes.*/