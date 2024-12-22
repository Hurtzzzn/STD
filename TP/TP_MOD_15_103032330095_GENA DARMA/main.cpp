#include "Tree.h"
int main()
{
    int x[9] = {8,6,15,4,7,12,17,9,13};
    int y[9] = {8,9,12,13,15,17,7,6,4};
    int i;
    adrNode root;
    adrNode P;

    root = NULL;

    for (i = 0; i < 9; i++){
        P = newNode_103032330095(x[i]);
        insertNode_103032330095(root, P);
    }
    cout << endl;

    for (i = 0; i < 9; i++){
        if (root != NULL){
            printInOrder_103032330095(root);
            cout << endl;
            P = findNode_103032330095(root, y[i]);
            deleteNode_103032330095(root, P);
        }
    }
    cout << "(kosong)";
    return 0;
}
