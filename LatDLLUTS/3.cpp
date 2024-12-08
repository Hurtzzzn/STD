#include "3.h"

void createList(List &L){
    L.first = NULL;
    L.last = NULL;
}

address createNewElm(int x, string y){
    address P = new elmList;
    P->info.tanggal = x;
    P->info.namafile = y;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void insertLast(List &L, address P){
    address Q;
    if (L.first != NULL && L.last != NULL) {
        P ->prev = L.last;
        L.last ->next = P;
        L.last = P;
    } else {
        L.first = P;
        L.last = P;
    }
}

void deleteLastBackUp(List &L, string nmFile){
    address P;
    address prec;
    P = L.first;
    while (P != NULL){
        if (P->info.namafile == nmFile){
            if (P == L.first){
                prec = P;
            } else {
                prec = P->prev;
            }
        }
        P = P->next;
    }
    if (prec == L.first){
        P = L.first;
        L.first = P->next;
        L.first ->prev = NULL;
        P->next = NULL;
    } else if (prec->next == L.last){
        P = L.last;
        L.last = P->prev;
        L.last ->next =NULL;
        P->prev = NULL;
    } else {
        P = prec->next;
        prec->next = P->next;
        P->next->prev = prec;
        P->next = NULL;
        P->prev = NULL;
    }
}

int countX(string nmFile){
    int jum;
    address P;

}

void print(List L){
    address P;
    P = L.first;
    if (L.first == NULL){
        cout << "Kosong";
    } else {

    while (P != NULL){
        cout << P->info.tanggal << " " << P->info.namafile << endl;
        P = P->next;
    }
    }
}


