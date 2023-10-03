#include <iostream>
using namespace std;

#define infinito INT_MAX

Prim(G = (V, A), w[], v0){ // v0 = vértice inicial
    for(percorre os vértices){ // u pertencentes a V
        custo[u] = infinito;
        prev[u] = -1;
    }

    custo[v0] = 0;
    H = Fila_prioridade_min(V, custo);

    while(!H.empty()){
        v = H.min(); // remove

        for(percorre os vértices){ // z pertencente a N(v)
            if(custo[z] > w[v, z]){
                custo[z] = w[v, z];
                H.priority(z, custo[z]); //diminuir a prioridade de v
                prev[z] = v;
            }
        }
    }
}

int main() {





    return 0;
}