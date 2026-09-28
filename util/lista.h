#ifndef LISTA_H
#define LISTA_H

//Aresta na lista de adjacencia
struct No {
    int destino;
    int peso;
    struct No* prox;
};

struct Lista {
    No* cabeca; // cabeça da lista

    void inicializar();

    void inserir_ordenado(); //insere nó na posição correta

    void liberar();
};

#endif