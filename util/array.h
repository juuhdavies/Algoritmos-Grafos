#ifndef ARRAY_H
#define ARRAY_H

struct NoVetor {
    int origem;
    int destino;
    int peso;
};

struct ArrayNos {
    NoVetor* dados;
    int tam;
    int capacidade;

    void inicializar(int capacidade);
    void push_back(int u, int v, int peso);
    void ordenar_peso();
    void liberar();
};

#endif