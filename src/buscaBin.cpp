#include <iostream>
#include <math.h>

using namespace std;

int buscaBin(int B[], int x, int l, int r){
    while(r >= l){
        int m = (l + r) / 2;
        if(x == B[m]){
            return m;
        } else if(x < B[m]){
            r = m - 1;
        } else {
            l = m + 1;
        };
    };
    return -1;
}