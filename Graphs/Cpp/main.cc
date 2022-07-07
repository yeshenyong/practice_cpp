#include <stdio.h>
#include <iostream>
#include "graphs.h"

using namespace ygraph;

int main(int argc, char* argv[]) {
    const int u_vertices = 9;
    const int d_vertices = 9;

    UndirectedGraph* g = new UndirectedGraph();
    g->init(u_vertices);

    printf("Undirected Graph with %d vertices:\n", u_vertices);

    g->add_edge(0, 1);
    g->add_edge(1, 2);
    g->add_edge(1, 7);
    g->add_edge(2, 3);
    g->add_edge(3, 4);
    g->add_edge(3, 5);
    g->add_edge(3, 7);
    g->add_edge(4, 5);
    g->add_edge(5, 6);
    g->add_edge(6, 7);
    g->add_edge(6, 8);
    g->add_edge(7, 8);

    g->print_dfs();

    g->close();

    delete g;

    DirectedGraph* dg = new DirectedGraph();
    dg->init(u_vertices);

    dg->add_edge(0, 1);
    dg->add_edge(0, 5);
    dg->add_edge(1, 2);
    dg->add_edge(2, 4);
    dg->add_edge(2, 6);
    dg->add_edge(3, 2);
    dg->add_edge(6, 5);
    dg->add_edge(5, 8);
    dg->add_edge(7, 5);

    dg->print_dfs();

    dg->close();

    delete dg;

    return 0;
}
