#include <iostream>
#include <math.h>

using namespace std;

int buscaTer(int B[], int x, int l, int r){
    while(r >= l){
        int t = (r - l + 1)/3;
        int t1 = l + t;
        int t2 = t1 + t;
        if (x == B[l]){
            return l;
        } else if (x == B[r]) {
            return r;
        } else if (x == B[t1]){
            return t1;
        } else if (x == B[t2]){
            return t2;
        } else if (x < B[t1]){
            r = t1;
            t = (r - l)/3;
            t1 = l + t;
            t2 = t1 + t;
        } else if (x < B[t2]){
            l = t1;
            r = t2;
            t = (r - l)/3;
            t1 = l + t;
            t2 = t1 + t;
        } else if (x < B[r]) {
            l = t2;
            t = (r - l)/3;
            t1 = l + t;
            t2 = t1 + t;
        } else {
            return -1;
        }
    };
}