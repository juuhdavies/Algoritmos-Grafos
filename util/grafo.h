#ifndef GRAFO_H
#define GRAFO_H
#include "lista.h"

struct Grafo {
    int total_vertices;
    bool orientado;
    Lista* adjacencias;

    void inicializar(int v, bool orientado);
    void adicionar_aresta(int origem, int destino, int peso);
    void carregar_arquivo(const char* path);
    void liberar();

    //algoritmos a implementar

    void BFS(int origem);
    void DFS(int origem);
    void ordenacao_topologica();
    void componentes_forte_conexas();
    void dijkstra(int origem);
    void kruskal();

    //usar biblioteca externa para esse
    void mostrar_grafo();

};

#endif