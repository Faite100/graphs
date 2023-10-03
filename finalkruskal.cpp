#include <iostream>
using namespace std;

#define infinito INT_MAX

void Union(int x, int y){
    if(rank[x] >= rank[y]){
        pai[y] = x;
        if(rank[x] == rank[y]){
            rank[x]++;
        }
    }
    else{
        pai[y] = x;
    }
}

int find(int x){
    if(pai[x] != x){
        pai[x] = find(pai[x]);
    }
    return pai[x];
}

void make_set(int x){
    pai[x] = x;
    rank[x] = 0;
}

Kruskal(G = (V, A), w[]){
    T = 0;

    for(percorre os vértices){
        make_set(v);
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