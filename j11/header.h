#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;

typedef struct vertex *adrVertex;

typedef struct edge *adrEdge;

struct vertex {
    char idVertex;
    adrVertex nextVertex;
    adrEdge firstEdge;
};

struct edge {
    char destVertexID;
    int weight;
    adrEdge nextEdge;
};

struct graph {
    adrVertex firstVertex;
};

void createVertex_103032330095(char newVertexID, adrVertex &V);

void initGraph_103032330095(graph &G);

void addVertex_103032330095(graph &G, char newVertexID);

void buildGraph_103032330095(graph &G);

adrVertex searchVertex_103032330095(graph G, char IDsimpul);

void createEdge_103032330095(char IDsimpulTujuan, int bobot, adrEdge &e);

void addEdge_103032330095(graph &G, char IDsimpulAsal, char IDsimpulTujuan, int bobot);

int outDegree_103032330095(graph G, char IDsimpul);

int inDegree_103032330095(graph G, char IDsimpul);

int degree_103032330095(graph G, char IDsimpul);

bool isSimpleGraph(graph G);

#endif // HEADER_H_INCLUDED
