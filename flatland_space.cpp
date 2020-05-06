int m = c.size();
    int val = 0; // variable name max create problem on Hackerrank as max is also a funxn
    if(n==m)
        return val;
    else {
        for(int i =0; i < n; i++) {
           int flag = 0; // flag == 0 it is not a space station
            for(int j =0; j < m; j++) {
                if(i == c[j]) {
                    flag = 1;
                    break;
                }
            }
            int diff;
            if(flag == 0) {
                int x;
                diff = abs(i - c[0]);
                for(int j = 1; j< m; j++) {
                    x = abs(i - c[j]);
                    diff = diff < x ? diff : x; // we always compare with least distance
                }                               // as we save least in diff
            val = val > diff ? val : diff;
            }
        }
    }
    return val;