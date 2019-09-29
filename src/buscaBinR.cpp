#include <iostream>
#include <math.h>

using namespace std;

int buscaBinR(int B[], int x, int l, int r){
    int m = 0;
    if(l > r){
        return -1;
    } else {
        m = (l + r)/2;
        if (x == B[m]){
            return m;
        } else if (x < B[m]) {
            return buscaBinR(B, x, l, m-1);
        } else {
            return buscaBinR(B, x, m+1, r);
        }
    }
}