#include "Tree.h"

adrNode newNode_103032330095(infotype x){
    adrNode p = new Node;
    p->info = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

adrNode findNode_103032330095(adrNode root, infotype x){
    if (root->info == x || root == NULL){
        return root;
    } else {
        if (root->info > x){
            findNode_103032330095(root->left, x);
        } else if (root->info < x){
            findNode_103032330095(root->right, x);
        }
    }
}

void insertNode_103032330095(adrNode &root, adrNode p){
    adrNode Q;
    if (root == NULL){
        root = p;
    } else {
        Q = root;
        if (Q->info > p->info) {
            insertNode_103032330095(Q->left, p);
        } else if (Q->info < p->info){
            insertNode_103032330095(Q->right, p);
        } else {
            cout << endl << "Node Duplicate" << endl;
        }
    }
}

void printPreOrder_103032330095(adrNode root){
    if (root != NULL){
        cout << root->info << " ";
        printPreOrder_103032330095(root->left);
        printPreOrder_103032330095(root->right);
    }
}

void printDescendant_103032330095(adrNode root, infotype x){
   adrNode P;
   P = findNode_103032330095(root, x);
   if (P != NULL){
        if (P->left != NULL){
            cout << P->left->info << " ";
            printDescendant_103032330095(P->left, P->left->info);
        }
        if (P->right != NULL){
            cout << P->right->info << " ";
            printDescendant_103032330095(P->right, P->right->info);
        }
   }
}

int sumNode_103032330095(adrNode root){
    int sum = 0;
    if (root == NULL){
        return sum;
    } else {
        sum = sumNode_103032330095(root->left) + sumNode_103032330095(root->right);
        return sum + root->info;
    }
}

int countLeaves_103032330095(adrNode root){
    if (root == NULL){
        return 0;
    } else {
        if (root->left == NULL && root->right == NULL){
            return 1;
        } else {
            return countLeaves_103032330095(root->left) + countLeaves_103032330095(root->right);

        }
    }
}

int heightTree_103032330095(adrNode root){
    int leftHeight = 0;
    int rightHeight = 0;
    if (root == NULL){
        return -1;
    } else {
        leftHeight = heightTree_103032330095(root->left) + 1;
        rightHeight = heightTree_103032330095(root->right) + 1;
        if (leftHeight > rightHeight){
            return leftHeight;
        } else {
            return rightHeight;
        }
    }
}
