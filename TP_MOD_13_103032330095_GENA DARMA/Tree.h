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

adrNode findNode_103032330095(adrNode root, infotype x);

void insertNode_103032330095(adrNode &root, adrNode p);

void printPreOrder_103032330095(adrNode root);

void printDescendant_103032330095(adrNode root, infotype x);

int sumNode_103032330095(adrNode root);

int countLeaves_103032330095(adrNode root);

int heightTree_103032330095(adrNode root);

#endif // TREE_H_INCLUDED
