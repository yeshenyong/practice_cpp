#include <stdio.h>
#include <iostream>
#include "graphs.h"

using namespace ygraph;

int main(int argc, char* argv[]) {
    const int u_vertices = 9;
    const int d_vertices = 9;

    UndirectedGraph* g = ugraph_create(u_vertices);

    printf("Undirected Graph with %d vertices:\n", u_vertices);

    ugraph_add_edge(g, 0, 1);
    ugraph_add_edge(g, 1, 2);
    ugraph_add_edge(g, 1, 7);
    ugraph_add_edge(g, 2, 3);
    ugraph_add_edge(g, 3, 4);
    ugraph_add_edge(g, 3, 5);
    ugraph_add_edge(g, 3, 7);
    ugraph_add_edge(g, 4, 5);
    ugraph_add_edge(g, 5, 6);
    ugraph_add_edge(g, 6, 7);
    ugraph_add_edge(g, 6, 8);
    ugraph_add_edge(g, 7, 8);
    ugraph_print_dfs(g);

    ugraph_destroy(g);

    printf("\n\nDirected graph with %d vertices:\n", d_vertices);

    DirectedGraph* dg = dgraph_create(d_vertices);

    dgraph_add_edge(dg, 0, 1);
    dgraph_add_edge(dg, 0, 5);
    dgraph_add_edge(dg, 1, 2);
    dgraph_add_edge(dg, 2, 4);
    dgraph_add_edge(dg, 2, 6);
    dgraph_add_edge(dg, 3, 2);
    dgraph_add_edge(dg, 6, 5);
    dgraph_add_edge(dg, 5, 8);
    dgraph_add_edge(dg, 7, 5);

    dgraph_print_dfs(dg);

    dgraph_destroy(dg);

    return 0;
}

