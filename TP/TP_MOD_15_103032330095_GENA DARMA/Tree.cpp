#include "Tree.h"

adrNode newNode_103032330095(infotype x){
    adrNode p = new Node;
    p->info = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void insertNode_103032330095(adrNode &root, adrNode p){
    if (root == NULL){
        root = p;
    } else {
        if (root->info > p->info) {
            insertNode_103032330095(root->left, p);
        } else if (root->info < p->info){
            insertNode_103032330095(root->right, p);
        } else {
            cout << endl << "Node Duplicate" << endl;
        }
    }
}

void deleteNode_103032330095(adrNode &root, adrNode &p){
    adrNode temp;
    if (root == NULL){
        cout << "Node tidak ketemu!" << endl;
    } else if (root->info > p->info){
        deleteNode_103032330095(root->left, p);
    } else if (root->info < p->info) {
        deleteNode_103032330095(root->right, p);
    } else {
        if (root->left == NULL && root->right == NULL){
            delete root;
            root = NULL;
        } else if (root->right == NULL){
            temp = root;
            root = root->left;
            delete temp;
        } else if (root->left == NULL){
            temp = root;
            root = root->right;
            delete temp;
        } else {
            temp = findMin_103032330095(root->right);
            root->info = temp->info;
            deleteNode_103032330095(root->right, temp);
        }
    }
}

void printInOrder_103032330095(adrNode root){
    if (root != NULL){
        printInOrder_103032330095(root->left);
        cout << root->info << " ";
        printInOrder_103032330095(root->right);
    }
}

adrNode findMin_103032330095(adrNode root){
    if (root->left == NULL){
        return root;
    } else {
        return findMin_103032330095(root->left);

    }
}

adrNode findNode_103032330095(adrNode root, infotype x){
    if (root->info == x || root == NULL){
        return root;
    } else {
        if (root->info > x){
           return findNode_103032330095(root->left, x);
        } else if (root->info < x){
           return findNode_103032330095(root->right, x);
        }
    }
}
