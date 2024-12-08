#include <iostream>
#include "list.h"
using namespace std;

void createList(List &L){
    first(L) = NULL;
}

address allocate(infotype x){
    address P = new elmlist;
    info(P) = x;
    next(P) = NULL;

    return P;
}

void insertFirst(List &L, address P){
    next(P) = first(L);
    first(L) = P;
}

void printInfo(List L){
    address P = first(L);
    while (P != NULL){
        cout << info(P) << ", ";
        P = next(P);
    }
    cout << endl;
}

void insertLast(List &L, address P){
    address Q;
    Q = first(L);
    while (next(Q) != NULL) {
        Q = next(Q);
    }
    next(Q) = P;
}

void insertAfter(List &L, address prec, address P){
    next(P) = next(prec);
    next(prec) = P;
}

address deleteFirst(List &L, address P){
    P = first(L);
    first(L) = next(P);
    next(P) = NULL;
    return P;
}

address deleteLast(List &L, address P){
    address Q, R;
    Q = first(L);
    while (next(Q) != NULL){
        R = Q;
        Q = next(Q);
    }
    P = next(R);
    next(R) = NULL;
    return P;
}

address deleteAfter(List &L, address prec, address P){
    P = next(prec);
    next(prec) = next(P);
    next(P) = NULL;
}











