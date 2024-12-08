#include "header.h"

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

adrVertex searchVertex_103032330095(graph G, char IDsimpul){
    adrVertex V;
    bool ketemu = false;
    V = G.firstVertex;
    while (V != NULL && !ketemu){
        ketemu = V->idVertex == IDsimpul;
        if (!ketemu){
            V = V->nextVertex;
        }
    }
    return V;
}

void createEdge_103032330095(char IDsimpulTujuan, int bobot, adrEdge &e){
    e = new edge;
    e->destVertexID = IDsimpulTujuan;
    e->weight = bobot;
    e->nextEdge = NULL;
}

void addEdge_103032330095(graph &G, char IDsimpulAsal, char IDsimpulTujuan, int bobot){
    adrVertex V;
    adrEdge e, Q;
    V = searchVertex_103032330095(G, IDsimpulAsal);
    if (V == NULL){
        cout << endl << "Simpul Tidak Ditemukan!" << endl;
    } else {
        createEdge_103032330095(IDsimpulTujuan, bobot, e);
        if (V->firstEdge == NULL){
            V->firstEdge = e;
        } else {
            Q = V->firstEdge;
            while (Q->nextEdge != NULL){
                Q = Q->nextEdge;
            }
            Q->nextEdge = e;
        }
    }
}

int outDegree_103032330095(graph G, char IDsimpul){
    int jumOutDegree = 0;
    adrVertex V;
    adrEdge e;
    V = searchVertex_103032330095(G, IDsimpul);
    if (V != NULL){
        e = V->firstEdge;
        while (e != NULL){
            jumOutDegree++;
            e = e->nextEdge;
        }
    }
    return jumOutDegree;
}

int inDegree_103032330095(graph G, char IDsimpul){
    int jumInDegree = 0;
    adrVertex V;
    adrEdge e;
    V = G.firstVertex;
    while (V != NULL){
        e = V->firstEdge;
        while (e != NULL){
            if (e->destVertexID == IDsimpul){
                jumInDegree++;
            }
            e = e->nextEdge;
        }
        V = V->nextVertex;
    }
    return jumInDegree;
}

int degree_103032330095(graph G, char IDsimpul){
    int jumInDegree, jumOutDegree;

    jumInDegree = inDegree_103032330095(G, IDsimpul);
    jumOutDegree = outDegree_103032330095(G, IDsimpul);

    return jumInDegree + jumOutDegree;
}

bool isSimpleGraph(graph G){
    adrVertex V;
    adrEdge e;
    V = G.firstVertex;
    while (V != NULL){
        e = V->firstEdge;
        while (e != NULL){
            if (e->destVertexID == V->idVertex){
                return false;
            } else {
                e = e->nextEdge;
            }
        }
        V = V->nextVertex;
    }
    return true;
}


