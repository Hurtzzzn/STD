#include "11.h"

void createList(List &L){
    L.first = NULL;
}

address createNewElm(int x){
    address P = new elmList;
    P->info = x;
    P->next = NULL;
    return P;
}

void insertLast(List &L, address P){
    address Q;
    if (L.first != NULL) {
        Q = L.first;
        while (Q->next != NULL){
            Q = Q->next;
        }
        Q->next = P;
        L.last = P;
    } else {
        L.first = P;
        L.last = P;
    }
}

void deleteAfter(List &L, address &prec){
    address P;
    P = prec->next;
    prec->next = P->next;
    P->next = NULL;
    delete(P);

}

void redundanToUnik(List &L){
    address prec, P;
    P = L.first;
    while (P != NULL){
        prec = P;
        while (prec->next != NULL){
            if (prec->next->info == P->info){
                deleteAfter(L, prec);
            } else {
                prec = prec->next;
            }
        }
        P = P->next;
    }
    L.last = prec;

}

void print(List L){
    address P;
    P = L.first;
    if (L.first == NULL){
        cout << "Kosong";
    } else {

    while (P != L.last){
        cout << P->info << " ";
        P = P->next;
    }
    cout << P->info;
    }
}

