#include "dll.h"

void createList(List &L){
    L.first = NULL;
    L.last = NULL;
}

address createNewElm(infotype akun){
    address P = new elmList;
    P ->info = akun;
    P ->next = NULL;
    P ->prev = NULL;
    return P;
}

void insertLast(List &L, address P){
    if (L.first == NULL && L.last == NULL) {
        L.first = P;
        L.last = P;
    } else {
        P ->prev = L.last;
        L.last ->next = P;
        L.last = P;
    }
}

address findAkun(List L, string username){
    address P;
    P = L.first;
    while (P != NULL && P->info != username){
        P = P->next;
    }
    return P;
}

void signUp(List &L, infotype akun){
    address P, Q;
    P = createNewElm(akun);
    Q = findAkun(L, akun);
    if (Q == NULL){
        insertLast(L, P);
    } else {
        cout << "Account has been registered." << endl;
    }
}

void deleteFirst(List &L, address &P){
    if (L.first != L.last){
        P = L.first;
        L.first = P->next;
        L.first ->prev = NULL;
        P ->next = NULL;
    } else if (L.first == L.last){
        P = L.first;
        L.first = NULL;
        L.last = NULL;
    }
}

void deleteAfter(address Q, address &P){
    P = Q ->next;
    Q ->next = P ->next;
    P ->next->prev = Q;
    P ->prev = NULL;
    P ->next = NULL;
}

void deleteLast(List &L, address &P){
    if (L.first != L.last){
        P = L.last;
        L.last = P ->prev;
        L.last ->next = NULL;
        P ->prev = NULL;
    } else {
        P = L.first;
        L.first = NULL;
        L.last = NULL;
    }
}

void removeAkun(List &L, string username){
    address P, Q;
    P = findAkun(L, username);
    if (L.first == NULL && L.last == NULL){
        cout << "List Empty!" << endl;
    } else {
        if (P == NULL) {
            cout << "Account Not Found!" << endl;
        } else if (P == L.first){
            deleteFirst(L, P);
        } else if (P == L.last) {
            deleteLast(L, P);
        } else {
            Q = P;
            deleteAfter(Q, P);
        }
    }
    delete (P);
}

void show(List L){
    address P;
    P = L.first;
    if (L.first == NULL){
        cout << "Kosong";
    } else {
        while (P != NULL) {
            cout << P->info << endl;
            P = P->next;
        }

    }
}
