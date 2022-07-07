#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

#ifndef GRAPHS_PRACTICE_C_GRAPHS_H
#define GRAPHS_PRACTICE_C_GRAPHS_H

namespace ygraph {


typedef struct {
    int v;  /* vertex count */
    int e;  /* edge count */

    /* prepare fix to vector */
    struct neighbors {
        int length;
        int capacity;
        int list[];
    } * adjacency_list[];

} UndirectedGraph;

typedef struct {
    int v;  /* vertex count */
    int e;  /* edge count */

    struct targets {
        int length;
        int capacity;
        int list[];
    } * adjacency_list[];

} DirectedGraph;

UndirectedGraph* ugraph_create(const int v);

void ugraph_destroy(UndirectedGraph* g);

void ugraph_add_edge(UndirectedGraph* g, const int src, const int dst);

void _ugraph_append_edge(UndirectedGraph* g, const int src, const int dst);

void ugraph_print_dfs(UndirectedGraph* g);

void ugraph_dfs(UndirectedGraph* g, int visited[], const int vertex);

DirectedGraph* dgraph_create(const int v);

void dgraph_destroy(DirectedGraph* g);

void dgraph_add_edge(DirectedGraph* g, const int src, const int dst);

void _dgraph_add_edge(DirectedGraph* g, const int src, const int dst);

void dgraph_print_dfs(DirectedGraph* g);

void dgraph_dfs(DirectedGraph* g, int visited[], const int vertex);

};  // namespace ygraph

#endif  // GRAPHS_PRACTICE_C_GRAPHS_H