#include "sll.h"

void createList(List &L){
    L.First = NULL;
}

address createNewElemen(infotype X){
    address P = new elmList;
    P->info = X;
    P->next = NULL;
    return P;
}

void insertLast(List &L, address P){
    address Q;
    if (L.First == NULL){
        L.First = P;
    } else {
        Q = L.First;
        while (Q->next != NULL){
            Q = Q->next;
        }
        Q->next = P;
    }
}

void deleteFirst(List &L, address &P){
    if (L.First == NULL){
        P = NULL;
    } else if (L.First->next == NULL){
        P = L.First;
        L.First = NULL;
    } else {
        P = L.First;
        L.First = P->next;
        P->next = NULL;
    }
}

void showList(List L){
    address P;
    if (L.First == NULL){
        cout << "List Kosong!" << endl;
    } else {
        P = L.First;
        while (P != NULL){
            cout << "Nama Driver : " << P->info.nama << endl;
            cout << "Rating Driver : " << P->info.rating << endl;
            P = P->next;
        }
    }
}

void resetList(List &L){
    address P;
    int banyakDriver = 0;
    float jumRating = 0, rataRata = 0;
    if (L.First == NULL){
        cout << "List Kosong!" << endl;
    } else {
        P = L.First;
        while (L.First != NULL){
            deleteFirst(L, P);
            cout << "Nama Driver : " << P->info.nama << endl;
            cout << "Rating Driver : " << P->info.rating << endl;
            banyakDriver++;
            jumRating += P->info.rating;
        }
        rataRata = jumRating / float(banyakDriver);
        cout << "Rata-Rata Rating : " << rataRata << endl;
    }
}

void splitList(List &L, List &LA, List &LB, float N){
    address P;
    while (L.First != NULL){
        deleteFirst(L, P);
        if (P->info.rating < N){
            insertLast(LA, P);
        } else {
            insertLast(LB, P);
        }
    }
}
