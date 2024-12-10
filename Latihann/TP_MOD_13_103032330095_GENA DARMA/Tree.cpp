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

void printInOrder(adrNode root){
    if (root != NULL){
        printInOrder(root->left);
        cout << root->info << " ";
        printInOrder(root->right);
    }
}
/* I.S. terdefinisi root dari BST (mungkin NULL)
   F.S. menampilkan node dari BST secara InOrder atau dengan urutan
left, root dan right */

void printPostOrder(adrNode root){
    if (root != NULL){
        printPostOrder(root->left);
        printPostOrder(root->right);
        cout << root->info << " ";
    }
}
/* I.S. terdefinisi root dari BST (mungkin NULL)
   F.S. menampilkan node dari BST secara PostOrder atau dengan urutan
left, right dan root*/

void printLeftMostNode(adrNode root){
    if (root != NULL){
        printLeftMostNode(root->left);
        if (root->left == NULL){
            cout << root->info;
        }
    }
}
/* I.S. terdefinisi suatu root dari BST (mungkin NULL)
   F.S. menampilkan node paling kiri dari BST
Catatan: implementasikan secara REKURSIF */

void printRightMostNode(adrNode root){
    if (root != NULL){
        printRightMostNode(root->right);
        if (root->right == NULL){
            cout << root->info;
        }
    }
}
/* I.S. terdefinisi suatu root dari BST (mungkin NULL)
   F.S. menampilkan node paling kanan dari BST
Catatan: implementasikan secara REKURSIF */

int countNode(adrNode root){
    if (root == NULL){
        return 0;
    } else {
        return countNode(root->left) + countNode(root->right) + 1;
    }
}
/* mengembalikan banyaknya node yang terdapat pada BST, Catatan:
implementasikan secara REKURSIF */

void printAncestor(adrNode root, infotype x){
    if (root != NULL){
        if (root->info > x){
            printAncestor(root->left, x);
            cout << root->info << " ";
        } else if (root->info < x){
            printAncestor(root->right, x);
            cout << root->info << " ";
        }
    }
}
/* I.S. terdefinisi suatu root dari BST (mungkin NULL), dan infotype x
   F.S. menampilkan ancestor atau leluhur dari node dengan info x,
tampilkan dari node ke atas menuju root
Catatan: implementasikan secara REKURSIF */

int countInternalNode(adrNode root){
    if (root == NULL || (root->left == NULL && root->right == NULL)){
        return 0;
    } else {
        if (root->left != NULL || root->right != NULL){
            return countInternalNode(root->left) + countInternalNode(root->right) + 1;
        }
    }
}
/* mengembalikan banyaknya node selain root yang minimal memiliki satu
anak dari BST */

int depthNode(adrNode root, infotype n){
    if (root == NULL){
        return -1;
    } else {
        if (root->info > n){
            return depthNode(root->left, n) + 1;
        } else if (root->info < n){
            return depthNode(root->right, n) + 1;
        } else {
            return 0;
        }
    }
}
/* mengembalikan banyaknya edge dari suatu root menuju suatu node n.
Catatan: implementasikan secara REKURSIF */

int levelNode(adrNode root, infotype n){
    return 1 + depthNode(root, n);
}
/* mengembalikan 1 + kedalaman dari suatu node n dari root*/
