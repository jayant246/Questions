#include <iostream>
using namespace std;
int main() {
    int n, k, problem, pnum; // pnum = problem number
    int answ =0;
    int page =1;
    cin >> n >> k;
    for(int chapter = 1;  chapter <=n; chapter++) {
        cin >> problem;
        for(int pnum = 1; pnum <=problem; pnum++) {
            if(pnum == page)
                answ++;

            if(pnum == problem || pnum%k == 0)
                page++;
        }
    }
    cout << answ;
    return 0;
}