#include <iostream>
using namespace std;

DFSrec(Grafo G, v) {
    pre[v] = cont1++;

    for(percorre as arestas de V){ //N+
        if(pre[w] == -1){
            pai[w] = v;
            DFSrec(G, w);
        }
    }

    post[v] = cont2++;
}

DFS() {
    int cont1 = 0, cont2 = 0;

    for(percorre os vértices){
        pre[v] = -1;
    }

    for(percorre os vértices){
        if(pre[v] == -1){
            pai[v] = v;
            DFSrec(G, v); //G = Grafo, v = vértice
        }
    }
}



int main() {





    return 0;
}