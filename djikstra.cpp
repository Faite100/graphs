#include <iostream>
using namespace std;

#define infinito INT_MAX

Dijkstra(G = (V, A), w[], v0){
    for(percorre os vértices){
        dist[v] = infinito;
        prev[v] = -1;
    }

    dist[v0] = 0;
    H = Fila_prioridade_min(V, dist);

    while(!H.empty()){
        u = H.min(); // remove

        for(percore os vértices){ // N+
            if(dist[v] > dist[u] + w[u, v]){
                dist[v] = dist[u] + w[u, v];
                prev[v] = u;
                H.priority(v, dist[v]); //diminuir a prioridade de v
            }
        }
    }
}

int main() {





    return 0;
}