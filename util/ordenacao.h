#ifndef ORDENACAO_H
#define ORDENACAO_H
#include "array.h"

struct Ordenacao {
    static void quickSort(NoVetor* arestas, int inicio, int fim);
    static void mergeSort(NoVetor* arestas, int inicio, int fim);

    static int particiona(NoVetor* arestas, int inicio, int fim);
    static void mescla(NoVetor* arestas, int inicio, int meio, int fim);
    static void troca(NoVetor& a, NoVetor& b);
};


#endif