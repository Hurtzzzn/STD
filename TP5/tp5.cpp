#include "tp5.h"
void createList_103032330095(List &L){
    L.first = NULL;
}
address createNewElm_103032330095(infotype data) {
    address P = new elmList;
    P ->info = data;
    P ->next = NULL;
    return P;
}

void insertLast_103032330095(List &L, address P){
    address Q;
    if (L.first == NULL){
        L.first = P;
    } else {
        Q = L.first;
        while (Q ->next != NULL){
            Q = Q ->next;
        }
        Q ->next = P;
    }
}

address findMin_103032330095(List L){
    address P, minData;
    minData = L.first;
    P = L.first ->next;
    while (P != NULL){
        if (P->info < minData ->info){
            minData = P;
        }
        P = P->next;
    }
    return minData;
}
void insertMiddle_103032330095(List &L, int value){
    address P, prec;
    int i, n;
    P = createNewElm_103032330095(value);
    prec = L.first;
    n = 1;
    while (prec ->next != NULL) {
        prec= prec ->next;
        n++;
    }
    if (n % 2 == 1){
        n++;
    }
    n = n / 2;
    prec = L.first;
    for (i = 1; i < n; i++){
        prec = prec->next;
    }
    P ->next = prec ->next;
    prec ->next = P;
}

void showAllData_103032330095(List L){
    address P;
    if (L.first == NULL){
        cout << "List Kosong." << endl;
    } else {
        P = L.first;
        cout << "Data dalam list : ";
        while (P != NULL){
            cout << P->info;
            if (P->next != NULL){
                cout << ", ";
            }
            P = P->next;
        }
        cout << endl;
    }
}

void tambahData_103032330095(List &L, int data){
    address P;
    P = createNewElm_103032330095(data);
    insertLast_103032330095(L, P);
}

int selectMenu_103032330095(){
    int input = 0;
    cout << "======MENU=======" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Menampilkan nilai terkecil" << endl;
    cout << "4. Menambah data ke tengah list" << endl;
    cout << "0. Exit" << endl;
    cin >> input;
    return input;
}
