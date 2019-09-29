/*Dado um conjunto de valores previamente armazenados em um vetor A, nas
posições A[l], A[l + 1], . . . , A[r], verificar se um número k está entre este conjunto
de valores. Se o elemento procurado k não for encontrado a função deve retornar
−1. Caso contrário deve retornar o índice do vetor A que contém o elemento k.*/

#include <iostream>
#include <math.h>

using namespace std;

int buscaSeq(int A[], int k, int l, int r){
    for(int i = l; i <= r; i++){
        if(A[i]==k){
            return i;
        }
    }
    return -1;
}