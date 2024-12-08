#include "graph.h"

int main()
{
    graph G;
    adrVertex V;

    initGraph_103032330095(G);

    buildGraph_103032330095(G);

    V = G.firstVertex;
    while (V != NULL) {
        cout << endl << "ID Vertex : " << V->idVertex << endl;
        if (V->firstEdge == NULL){
            cout << "First Edge : NULL" << endl;
        }
        V = V->nextVertex;
    }
    return 0;
}
