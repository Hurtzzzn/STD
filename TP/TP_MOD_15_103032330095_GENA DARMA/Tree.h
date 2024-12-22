#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>

using namespace std;

typedef int infotype;

typedef struct Node *adrNode;

struct Node {
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode_103032330095(infotype x);

void insertNode_103032330095(adrNode &root, adrNode p);

void deleteNode_103032330095(adrNode &root, adrNode &p);

void printInOrder_103032330095(adrNode root);

adrNode findMin_103032330095(adrNode root);

adrNode findNode_103032330095(adrNode root, infotype x);

#endif // TREE_H_INCLUDED
