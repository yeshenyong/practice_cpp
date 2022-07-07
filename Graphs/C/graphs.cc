#include "graphs.h"

namespace ygraph {

UndirectedGraph* ugraph_create(const int v) {
    UndirectedGraph* g = (UndirectedGraph *)malloc(sizeof(UndirectedGraph) 
                                + sizeof(UndirectedGraph::neighbors*) * v);
    assert(g);

    g->v = v;
    g->e = 0;
    
    for (int i = 0; i < v; i++) {
        /* code */
        g->adjacency_list[i] = (UndirectedGraph::neighbors*)malloc(sizeof(UndirectedGraph::neighbors));
        assert(g->adjacency_list[i]);

        g->adjacency_list[i]->length = 0;
        g->adjacency_list[i]->capacity = 0;
    }
    
    return g;
}

void ugraph_destroy(UndirectedGraph* g) {
    for (int i = 0; i < g->v; i++) {
        /* code */
        free(g->adjacency_list[i]);
    }
    free(g);
}

void ugraph_add_edge(UndirectedGraph* g, const int src, const int dst) {
    assert(src >= 0);
    assert(dst >= 0);
    assert(src != dst);
    assert(src < g->v);
    assert(dst < g->v);

    _ugraph_append_edge(g, src, dst);
    _ugraph_append_edge(g, dst, src);
}

void _ugraph_append_edge(UndirectedGraph* g, const int src, const int dst) {
    /* resizes array if needed */
    if (g->adjacency_list[src]->length == g->adjacency_list[src]->capacity) {
        /* 扩容机制 2 * capacity + 1 */
        g->adjacency_list[src]->capacity = g->adjacency_list[src]->capacity * 2 + 1;

        g->adjacency_list[src] = (UndirectedGraph::neighbors*)realloc(g->adjacency_list[src],
                                        sizeof(UndirectedGraph::neighbors) + 
                                        sizeof(int) * g->adjacency_list[src]->capacity);
    }

    /* fix:  g->adjacency_list[src]->list[g->adjacency_list[src]->length++] = dest;*/
    int length = g->adjacency_list[src]->length;
    g->adjacency_list[src]->list[length] = dst;
    g->adjacency_list[src]->length++;

    g->e++;
}

void ugraph_print_dfs(UndirectedGraph* g) {
    int visited[g->v];
    memset(visited, 0, sizeof(visited));

    // will find all vertices if graph is connected (连通图的情况下才能全部打印)
    ugraph_dfs(g, visited, 0);
}

/* 摒弃 */
void ugraph_dfs(UndirectedGraph* g, int visited[], const int vertex) {
    visited[vertex] = 1;
    printf("%d -> ", vertex);

    for (int e = 0; e < g->adjacency_list[vertex]->length; e++) {
        /* code */
        int node = g->adjacency_list[vertex]->list[e];

        if (visited[node] == 0) {
            /* 递归, 这样大图上, 栈空间不太够 */
            ugraph_dfs(g, visited, node);
        }
    }
    
}

DirectedGraph* dgraph_create(const int v) {
    DirectedGraph* g = (DirectedGraph *)malloc(sizeof(DirectedGraph) + sizeof(DirectedGraph::targets) * v);
    assert(g);

    g->v = v;
    g->e = 0;

    for (int i = 0; i < v; i++) {
        /* code */
        g->adjacency_list[i] = (DirectedGraph::targets*)malloc(sizeof(DirectedGraph::targets));
        assert(g->adjacency_list[i]);

        g->adjacency_list[i]->length = 0;
        g->adjacency_list[i]->capacity = 0;
    }
    
    return g;
}

void dgraph_destroy(DirectedGraph* g) {
    for (int i = 0; i < g->v; i++) {
        /* code */
        free(g->adjacency_list[i]);
    }

    free(g);
}

void dgraph_add_edge(DirectedGraph* g, const int src, const int dst) {
    assert(src != dst);
    assert(src >= 0 && src < g->v);
    assert(dst >= 0 && dst < g->v);

    _dgraph_add_edge(g, src, dst);
}

void _dgraph_add_edge(DirectedGraph* g, const int src, const int dst) {
    if (g->adjacency_list[src]->length == g->adjacency_list[src]->capacity) {
        g->adjacency_list[src]->capacity = g->adjacency_list[src]->capacity * 2 + 1;
        g->adjacency_list[src] = (DirectedGraph::targets*)realloc(g->adjacency_list[src], 
                                        sizeof(DirectedGraph::targets) + 
                                        sizeof(int) * g->adjacency_list[src]->capacity);
    }

    g->adjacency_list[src]->list[g->adjacency_list[src]->length++] = dst;
    g->e++;
}

void dgraph_print_dfs(DirectedGraph* g) {
    int visited[g->v];
    memset(visited, 0, sizeof(visited));

    for (int v = 0; v < g->v; v++) {
        /* code */
        dgraph_dfs(g, visited, v);
    }
    
}

void dgraph_dfs(DirectedGraph* g, int visited[], const int vertex) {
    visited[vertex] = 1;
    printf("\n%d: ", vertex);

    for (int i = 0; i < g->adjacency_list[vertex]->length; i++) {
        /* code */
        int adj_vertex = g->adjacency_list[vertex]->list[i];

        if (visited[adj_vertex] == 0) {
            printf("\t%d -> %d, ", vertex, adj_vertex);
            dgraph_dfs(g, visited, adj_vertex);
        }
    }
    
}

};  // namespace ygraph