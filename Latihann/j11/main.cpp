#include "header.h"

int main()
{
    graph G;
    adrVertex V;
    adrEdge e;
    int jumInDegree, jumOutDegree, jumDegree;

    initGraph_103032330095(G);

    buildGraph_103032330095(G);

    V = G.firstVertex;
    while (V != NULL) {
        cout << endl << "ID Vertex : " << V->idVertex << endl;
        if (V->firstEdge == NULL){
            cout << "Edge : NULL" << endl;
        } else {
            e = V->firstEdge;
            cout << "Edge : ";
            while (e != NULL){
                cout << e->destVertexID;
                if (e->nextEdge != NULL){
                    cout << ", ";
                }
                e = e->nextEdge;
            }
            cout << endl;
        }
        V = V->nextVertex;
    }

    addEdge_103032330095(G, 'A', 'C', 12);
    addEdge_103032330095(G, 'A', 'D', 60);

    addEdge_103032330095(G, 'B', 'A', 10);

    addEdge_103032330095(G, 'C', 'B', 20);
    addEdge_103032330095(G, 'C', 'D', 32);

    addEdge_103032330095(G, 'E', 'A', 7);

    V = G.firstVertex;
    while (V != NULL) {
        cout << endl << "ID Vertex : " << V->idVertex << endl;
        if (V->firstEdge == NULL){
            cout << "Edge : NULL" << endl;
        } else {
            e = V->firstEdge;
            cout << "Edge : ";
            while (e != NULL){
                cout << e->destVertexID;
                if (e->nextEdge != NULL){
                    cout << ", ";
                }
                e = e->nextEdge;
            }
            cout << endl;
        }
        jumInDegree = inDegree_103032330095(G, V->idVertex);
        jumOutDegree = outDegree_103032330095(G, V->idVertex);
        jumDegree = degree_103032330095(G, V->idVertex);
        cout << "Jumlah Derajat Keluar  : " << jumOutDegree << endl;
        cout << "Jumlah Derajat Masuk   : " << jumInDegree << endl;
        cout << "Jumlah Derajat Total   : " << jumDegree << endl;
        V = V->nextVertex;
    }

    cout << endl << isSimpleGraph(G) << endl;

    return 0;
}
