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

void insertFirst(List &L, address P){
    if (L.First == NULL){
        L.First = P;
    } else {
        P->next = L.First;
        L.First = P;
    }
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

void insertAfter(List &L, address Prec, address P){
    if (L.First == NULL){
        L.First = P;
    } else {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void insertAfterValue(List &L, address P, int rating){
    address Prec;
    if (L.First == NULL){
        L.First = P;
    } else {
        Prec = L.First;
        while(Prec->info.rating != rating){
            Prec = Prec->next;
        }
        insertAfter(L, Prec, P);
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

void deleteLast(List &L, address &P){
     address Q, R;
     if (L.First == NULL){
        P = NULL;
    } else if (P->next == NULL){
        P = L.First;
        L.First = NULL;
    } else {
        Q = L.First;
        while (Q->next != NULL){
            R = Q;
            Q = Q->next;
        }
        P = R->next;
        R->next = NULL;
    }
}

void deleteAfter(List &L, address Prec, address &P){
     if (Prec == NULL || Prec->next == NULL) {
        P = NULL;
    } else {
        P = Prec->next;
        Prec->next = P->next;
        P->next = NULL;
    }
}

void deleteAfterValue(List &L, address &P, int rating){
    address Prec;
    if (L.First == NULL){
        P = NULL;
    } else if (P->next == NULL){
        P = L.First;
        L.First = NULL;
    } else {
        Prec = L.First;
        while (Prec->info.rating != rating){
            Prec = Prec->next;
        }
        deleteAfter(L, Prec, P);
    }
}

void showList(List L){
    address P;
    if (L.First == NULL){
        cout << "List Kosong!" << endl;
    } else {
        P = L.First;
        while (P != NULL){
            cout << "Nama Penumpang : " << P->info.namaPenumpang << endl;
            cout << "Nama Driver : " << P->info.namaDriver << endl;
            cout << "Rating Driver : " << P->info.rating << endl;
            P = P->next;
        }
    }
}

void resetList(List &L){
    address P;
    if (L.First == NULL){
        cout << "List Kosong!" << endl;
    } else {
        P = L.First;
        while (L.First != NULL){
            deleteLast(L, P);
        }
        cout << "List sudah kosong!" << endl;
    }
}

void Sorting(List &L){
    List L2;
    address P, min, Q;
    createList(L2);
    while (L.First != NULL){
        min  = L.First;
        P = L.First->next;
        while (P != NULL){
            if (P->info.rating < min->info.rating){
                min = P;
            }
            P = P->next;
        }
        if (min == L.First){
            deleteFirst(L, P);
        } else {
            Q = L.First;
            while (Q ->next != min){
                Q = Q->next;
            }
            deleteAfter(L, Q, P);
        }
        insertLast(L2, P);
    }
    L = L2;
}

void splitListSort(List &L1, List &L2, int rating){
    address P;
    if (L1.First->info.rating > rating){
        L2 = L1;
        L1.First = NULL;
    } else {
        P = L1.First;
        while (P->next->info.rating <= rating) {
            P = P->next;
        }
        L2.First = P->next;
        P->next = NULL;
    }
}

float rataRataRating(List L){
    int banyakDriver = 0;
    float jumRating = 0;
    address P;
    P = L.First;
    while (P != NULL){
        jumRating += P->info.rating;
        banyakDriver++;
        P = P->next;
    }
    //cout << jumRating << endl;
    //cout << banyakDriver << endl;
    return jumRating / float(banyakDriver);
}
