#ifndef FILA_H
#define FILA_H

struct NoFila {
    int vertice;
    NoFila* prox;
};

struct Fila {
    NoFila* inicio;
    NoFila* fim;

    void inicializar();
    void enqueue(int vertice); //insere no fim da fila
    int dequeue(); // remove e retorna o inicio da fila
    int head(); // retorna o valor do inicio;
    bool is_vazia();
    void liberar();
};

#endif