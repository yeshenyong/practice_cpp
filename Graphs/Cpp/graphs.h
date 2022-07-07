#include <iostream>
#include <stdlib.h>
#include <assert.h>
#include <string.h>
#include <vector>

#ifndef GRAPHS_PRACTICE_C_GRAPHS_H
#define GRAPHS_PRACTICE_C_GRAPHS_H

namespace ygraph {

// class Graph {
// public:
//     int v;  /* vertex count */
//     int e;  /* edge count */

//     virtual ~Graph() = default;
// };

class UndirectedGraph {
public:
    int v;  /* vertex count */
    int e;  /* edge count */

    struct neighbors {
        int length;
        int capacity;
        std::vector<int> list;
    };
    std::vector<neighbors*> adjacency_list;

    void init(const int v);
    void close();
    void add_edge(const int src, const int dst);
    void print_dfs();
private:
    void _append_edge(const int src, const int dst);
    void _graph_dfs(std::vector<int>& visited, const int vertex);
};

class DirectedGraph{
public:
    int v;  /* vertex count */
    int e;  /* edge count */
    
    struct targets {
        int length;
        int capacity;
        std::vector<int> list;
    };
    std::vector<targets*> adjacency_list;

    void init(const int v);
    void close();
    void add_edge(const int src, const int dst);
    void print_dfs();
private:
    void _append_edge(const int src, const int dst);
    void _graph_dfs(std::vector<int>& visited, const int vertex);
};

};  // namespace ygraph

#endif  // GRAPHS_PRACTICE_C_GRAPHS_H