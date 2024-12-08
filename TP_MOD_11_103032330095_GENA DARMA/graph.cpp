#include "graph.h"

void createVertex_103032330095(char newVertexID, adrVertex &V){
    V = new vertex;
    V->idVertex = newVertexID;
    V->nextVertex = NULL;
    V->firstEdge = NULL;
}

void initGraph_103032330095(graph &G){
    G.firstVertex = NULL;
}

void addVertex_103032330095(graph &G, char newVertexID){
    adrVertex V, Q;
    createVertex_103032330095(newVertexID, V);
    if (G.firstVertex == NULL){
        G.firstVertex = V;
    } else {
        Q = G.firstVertex;
        while (Q->nextVertex != NULL){
            Q = Q->nextVertex;
        }
        Q->nextVertex = V;
    }
}

void buildGraph_103032330095(graph &G){
    char newVertexID;
    adrVertex V;
    bool ketemu = false;
    cout << "ID Vertex : ";
    cin >> newVertexID;
    while (newVertexID >= 'A' && newVertexID <= 'Z'){
        V = G.firstVertex;
        while (V != NULL && !ketemu){
            ketemu = V->idVertex == newVertexID;
            if (!ketemu){
                V = V->nextVertex;
            }
        }
        if (ketemu){
            cout << endl << "Vertex tersebut sudah ada di dalam Graph!" << endl;
        } else {
            addVertex_103032330095(G, newVertexID);
        }
        cout << endl << "ID Vertex : ";
        cin >> newVertexID;
        ketemu = false;
    }
}
