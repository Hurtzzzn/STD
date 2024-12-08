#include "dll.h"

void createList(List &L){
    L.First = NULL;
    L.Last = NULL;
}

address createNewElemen(infotype X){
    address P = new elmList;
    P->info = X;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void insertFirst(List &L, address P){
    if (L.First == NULL && L.Last == NULL){
        L.First = P;
        L.Last = P;
    } else {
        P->next = L.First;
        L.First ->prev = P;
        L.First = P;
    }
}

void deleteFirst(List &L, address &P){
    P = L.First;
    if (L.First != L.Last){
        L.First = P->next;
        L.First->prev =NULL;
        P->next = NULL;
    } else {
        L.First = NULL;
        L.Last = NULL;
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
    while (L.First != NULL && L.Last != NULL){
        deleteFirst(L, P);
        if (P->info.rating < N){
            insertFirst(LA, P);
        } else {
            insertFirst(LB, P);
        }
    }
}
