#include <iostream>
using namespace std;

#define infinito INT_MAX

void Union(int x, int y){
    pai[y] = x;
}

int find(int x){
    int r = x;
    
    while(pai[r] != r){
        r = pai[r];
    }

    return r;
}

void make-set(int x){
    pai[x] = x;
}

Kruskal(G = (V, A), w[]){
    T = 0;

    for(percorre os vértices){
        make-set(v);
    }

    for(percorre as arestas) {// (u, v) pertencente a E // Ordenado pelo peso 
        if(find(u) != find(v)){
            T = T U {(u, v)};
            Union(find(u), find(v));
        }
    }

    return T;
}

int main() {



    return 0;
}