#include "graphs.h"

namespace ygraph {

void UndirectedGraph::init(const int v) {
    adjacency_list.resize(v);
    this->v = v;
    this->e = 0;
    for (int i = 0; i < v; i++) {
        adjacency_list[i] = new neighbors();
        assert(adjacency_list[i]);

        adjacency_list[i]->length = 0;
        adjacency_list[i]->capacity = 0;
    }
    
    return;
}

void UndirectedGraph::close() {
    for (int i = 0; i < v; i++) {
        delete adjacency_list[i];
    }
}

void UndirectedGraph::add_edge(const int src, const int dst) {
    assert(src >= 0 && src < v);
    assert(dst >= 0 && dst < v);
    assert(src != dst);

    _append_edge(src, dst);
    _append_edge(dst, src);
}

void UndirectedGraph::_append_edge(const int src, const int dst) {
    /* resizes array if needed */
    adjacency_list[src]->list.emplace_back(dst);
    adjacency_list[src]->length = adjacency_list[src]->list.size();
    adjacency_list[src]->capacity = adjacency_list[src]->list.capacity();

    e++;
}

void UndirectedGraph::print_dfs() {
    std::vector<int> visited(v, 0);

    // will find all vertices if graph is connected
    _graph_dfs(visited, 0);
}

void UndirectedGraph::_graph_dfs(std::vector<int>& visited, const int vertex) {
    visited[vertex] = 1;
    printf("%d -> ", vertex);

    for (int e = 0; e < adjacency_list[vertex]->length; e++) {
        /* code */
        int node = adjacency_list[vertex]->list[e];

        if (visited[node] == 0) {
            /* 递归, 这样大图上, 栈空间不太够 */
            _graph_dfs(visited, node);
        }
    }
}

void DirectedGraph::init(const int v) {
    adjacency_list.resize(v);
    this->v = v;
    this->e = 0;
    for (int i = 0; i < v; i++) {
        adjacency_list[i] = new targets();
        assert(adjacency_list[i]);

        adjacency_list[i]->length = 0;
        adjacency_list[i]->capacity = 0;
    }
    
    return;
}

void DirectedGraph::close() {
    for (int i = 0; i < v; i++) {
        delete adjacency_list[i];
    }
}

void DirectedGraph::add_edge(const int src, const int dst) {
    assert(src >= 0 && src < v);
    assert(dst >= 0 && dst < v);
    assert(src != dst);

    _append_edge(src, dst);
}

void DirectedGraph::_append_edge(const int src, const int dst) {
    /* resizes array if needed */
    adjacency_list[src]->list.emplace_back(dst);
    adjacency_list[src]->length = adjacency_list[src]->list.size();
    adjacency_list[src]->capacity = adjacency_list[src]->list.capacity();

    e++;
}

void DirectedGraph::print_dfs() {
    std::vector<int> visited(v, 0);

    for (int i = 0; i < v; i++) {
        /* code */
        _graph_dfs(visited, i);
    }
}

void DirectedGraph::_graph_dfs(std::vector<int>& visited, const int vertex) {
    visited[vertex] = 1;
    printf("\n%d: ", vertex);

    for (int i = 0; i < adjacency_list[vertex]->length; i++) {
        /* code */
        int adj_vertex = adjacency_list[vertex]->list[i];

        if (visited[adj_vertex] == 0) {
            printf("\t%d -> %d, ", vertex, adj_vertex);
            _graph_dfs(visited, adj_vertex);
        }
    }

}


};  // namespace ygraph
