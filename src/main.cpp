// Algoritmos do projeto da primeira unidade

#include <iostream>
#include "buscaLin.h"
#include "buscaBin.h"
#include "buscaBinR.h"
#include "buscaTer.h"
#include "buscaTerR.h"
#include "buscaJump.h"

using namespace std;

int main () {
    int A[]={1, 70, 4, 57, 7, 10, 22};
    int B[]={1, 3, 4, 5, 7, 10, 22, 25, 30, 32};
    int n = 1000;
    int C[n];
    for (int i = 0; i < n; i++){
        C[i] = i;
    };
    int k = 7;
    int x = 22;
    int l = 2;
    int r = 7;
    int y = 780;
    int a = 250;
    int b = 800;

    cout << "\n---------- Busca Linear Iterativa ----------\n\n*Parâmetros*\n\nA[] = {";
    for(int i=0; i < sizeof(A)/4; i++){
        if (i < (sizeof(A)/4)-1){
            cout << A[i] << ", ";
        } else {
            cout << A[i];
        }
    };
    cout <<"},\nk = "<< k <<",\nl = "<< l <<",\nr = " << r <<".\n\n***** Resultados *****\n\nbuscaSeq = " << buscaSeq(A, k, l, r) << "\n";

    cout << "\n---------- Busca Binária Iterativa ----------\n\n*Parâmetros*\n\nB[] = {";
    for(int i=0; i < sizeof(B)/4; i++){
        if (i < (sizeof(B)/4)-1){
            cout << B[i] << ", ";
        } else {
            cout << B[i];
        }
    };
    cout <<"},\nx = "<< x <<",\nl = "<< l <<",\nr = " << r <<".\n\n***** Resultados *****\n\nbuscaBin = " << buscaBin(B, x, l, r) << "\n";

    cout << "\n---------- Busca Binária Recursiva ----------\n\n*Parâmetros*\n\nB[] = {";
    for(int i=0; i < sizeof(B)/4; i++){
        if (i < (sizeof(B)/4)-1){
            cout << B[i] << ", ";
        } else {
            cout << B[i];
        }
    };
    cout <<"},\nx = "<< x <<",\nl = "<< l <<",\nr = " << r <<".\n\n***** Resultados *****\n\nbuscaBinR = " << buscaBinR(B, x, l, r) << "\n";

    cout << "\n---------- Busca Ternária Iterativa ----------\n\n*Parâmetros*\n\nC[] = {0 - "<< n <<"},\ny = "<< y <<",\na = "<< a <<",\nb = " << b <<".\n\n***** Resultados *****\n\nbuscaTer = " << buscaTer(C, y, a, b) << "\n";

    cout << "\n---------- Busca Ternária Recursiva ----------\n\n*Parâmetros*\n\nC[] = {0 - "<< n <<"},\ny = "<< y <<",\nl = "<< a <<",\nr = " << b <<".\n\n***** Resultados *****\n\nbuscaTerR = " << buscaTerR(C, y, a, b) << "\n";

    cout << "\n----------------- Busca Jump -----------------\n\n*Parâmetros*\n\nC[] = {0 - "<< n <<"},\ny = "<< y <<",\nl = "<< a <<",\nr = " << b <<".\n\n***** Resultados *****\n\nbuscaJump = " << buscaJump(C, y, a, b) << "\n";

    return 0;
}