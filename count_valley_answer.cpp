#include <iostream>
#include <string.h>
#include<iomanip>
using namespace std;
int main() {
    char string[] = "UDDDUDUU";
    int len = strlen(string);
    int count = 0, point = 0 ;
    for(int i = 0; i < len; i++) {
        if(string[i] == 'U') {
            point++;    
            if(point == 0) // this can be replaced with below OR solution
                count++;  
        }
        else if(string[i] == 'D')
            point--;
        // at last we check that point zero jaha hua vo "up" tha na
        // bcz up hone pe zero tbhi hoga jab wo niche se aaya ho i.e valley

        // OR solution

        // if(point == 0 && string[i] == 'U')  
        //     count++;
    }
    cout << count;
    return 0;
}