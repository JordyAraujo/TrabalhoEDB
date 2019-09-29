#include <iostream>
#include <math.h>

using namespace std;

int t, t1, t2;

int buscaTerR(int C[], int y, int a, int b){
        t = (b - a)/3;
        t1 = a + t;
        t2 = t1 + t;
        if (y == C[a]){
            return a;
        } else if (y == C[b]) {
            return b;
        } else if (y == C[t1]){
            return t1;
        } else if (y == C[t2]){
            return t2;
        } else if (y < C[t1]){
            buscaTerR(C, y, a, t1);
        } else if (y < C[t2]){
            buscaTerR(C, y, t1, t2);
        } else if (y < C[b]){
            buscaTerR(C, y, t2, b);
        } else {
            return -1;
        }
}