#include <iostream>
#include<iostream>
#include <string.h>
using namespace std; 

// Only function is here
string appendAndDelete(string s, string t, int k) {
    int slen = s.length();
    int tlen = t.length();
    int max = slen > tlen ? slen : tlen;

    //Conditional Statement
    if(k >= slen + tlen)
        return "Yes";
    else {
        for(int i = 0; i < max; i++) {
            if(t[i] != s[i]) {
                k -= slen - i; 
                k -= tlen - i;
                break;
            }
        }    
        if(k % 2 == 0 && k >=0)
            return "Yes";
        else
            return "No";
    }
}

// e.g. - s = abcaa // unecessary part is "bcaa" of length 4
//        t = axy   // necessary  part is "xy" of length 2
//        k = 9     // given
// So, basically we required 'atleast' k = 6 (4 + 2) to perform the required action.
// Now, remaining k = 9 - 6 (given - required) => 3
// Remaining 'k' must be an even +ve integer (including 0) because we want 'k' to be
// fully used i.e 'k' = 0
// If 'k' is 'odd' an extra alphabet will remain and our conditon will not satisfy
// Our case 'k' = 3 (delete, append, delete) or (append delete append)........
// leaves an extra alphabet.
 