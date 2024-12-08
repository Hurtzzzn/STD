#include "1.h"

void createList(List &L){
    L.first = NULL;
}

address createNewElm(int x){
    address P = new elmList;
    P->info = x;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

void insertLast(List &L, address P){
    address Q;
    if (L.first == NULL){
        L.first = P;
    } else if (L.first->next == NULL){
        L.first ->next = P;
        L.first ->prev = P;
        P->prev = L.first;
        P->next = L.first;
    } else {
        Q = L.first;
        while (Q->next != L.first){
            Q= Q->next;
        }
        Q->next = P;
        P->prev = Q;
        P->next = L.first;
        L.first->prev = P;
    }
}

void deleteFirst(List &L, address &P){
    address Q;
    if (L.first ->next == L.first && L.first->prev == L.first){
        L.first = NULL;
        P = NULL;
    } else {
    P = L.first;
    Q = P;
    while (Q->next != L.first){
        Q = Q->next;
    }
    L.first = P->next;
    L.first->prev = Q;
    Q->next = L.first;
    P->next = NULL;
    P->prev =NULL;
    }
}

void print(List L){
    address P;
    P = L.first;
    if (L.first == NULL){
        cout << "KOSONG";
    } else {
    while (P->next != L.first){
        cout << P->info << " ";
        P = P->next;
    }
    cout << P->info << endl;
    }
}

bool hasOne(List L){
    return (L.first->next == NULL && L.first ->prev == NULL) || (L.first->next == L.first && L.first->prev == L.first);
}
