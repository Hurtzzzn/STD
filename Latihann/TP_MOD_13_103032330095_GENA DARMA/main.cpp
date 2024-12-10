#include "Tree.h"

int main(){
    int x[12] = {6,3,8,1,5,7,9,0,2,4,15,11}, i;
    adrNode root = NULL, p;
    /* Tampilkan isi dari array */
    for (i = 0; i < 12; i++){
        cout << x[i] << " ";
    }
    /* 1. Tambahkan setiap elemen array x kedalam BST secara berurutan */
    /* sehingga dihasilkan BST seperti Gambar 1, gunakan looping*/
    for (i = 0; i < 12; i++){
        p = newNode_103032330095(x[i]);
        insertNode_103032330095(root, p);
    }

    /* 2. Tampilan node dari BST secara In-Order, Pre-Order, dan Post-Order*/
    printf("\n");
    printf("\nPre Order\t: ");
    printPreOrder_103032330095(root);

    printf("\nIn Order\t: ");
    printInOrder(root);

    printf("\nPost Order\t: ");
    printPostOrder(root);

    /* 3. Menampilkan node paling kiri dan kanan dari BST*/
    printf("\n\nLeft Most Node\t: ");
    printLeftMostNode(root);

    printf("\nRight Most Node\t: ");
    printRightMostNode(root);

    /* 4. Tampilkan leluhur keturuan dari node 3*/
    printf("\n\nDescendent of Node 3\t: ");
    printDescendant_103032330095(root, 3);

    printf("\n\nAncestor of Node 3\t: ");
    printAncestor(root, 3);

    /* 5. Tampilkan total info semua node pada BST */
    printf("\n\nSum of BST Info\t:  ");
    cout << sumNode_103032330095(root);

    /* 6. Tampilkan banyak node dari BST */
    printf("\nNumber of Node\t:  ");
    cout << countNode(root);

    /* 7. Tampilkan banyaknya daun dari BST */
    printf("\nNumber of Leaves\t: ");
    cout << countLeaves_103032330095(root);

    /* 8. Tampilkan Tinggi dari Tree*/
    printf("\nHeight of Tree\t\t: ");
    cout << heightTree_103032330095(root);

    printf("\nDepth of Node 3\t\t: ");
    cout << depthNode(root, 3);

    printf("\nLevel of Node 3\t\t: ");
    cout << levelNode(root, 3);

    printf("\nInternal Node of Tree\t\t: ");
    cout << countInternalNode(root);
}
