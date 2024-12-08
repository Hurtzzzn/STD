#include "DLL.h"

void createList_103032330095(List &L){
    L.first = NULL;
    L.last = NULL;
}

bool isEmpty_103032330095(List L){
    return L.first == NULL;
}
address createNewElmt_103032330095(infotype X){
    address P;
    P = new elmtList;
    P->info = X;
    P->next = NULL;
    P->prev = NULL;
    return P;
}
void insertFirst_103032330095(List &L, address P){
    if (isEmpty_103032330095(L)){
        L.first = P;
        L.last =P;
    }else{
        P->next = L.first;
        L.first->prev = P;
        L.first = P;
    }
}

void insertAfter_103032330095(List &L, address &Prec, address P){
    P->next  = Prec->next;
    P->prev = Prec;
    Prec->next->prev = P;
    Prec->next = P;
}

void insertLast_103032330095(List &L, address P){
    if (isEmpty_103032330095(L)){
        L.first = P;
        L.last = P;
    }else {
        P->prev = L.last;
        L.last->next = P;
        L.last = P;
    }
}
void deleteFirst_103032330095(List &L, address &P){
    if (L.first == L.last){
        P = L.first;
        L.first = NULL;
        L.last = NULL;
    }else {
        P = L.first;
        L.first = P->next;
        L.first->prev = NULL;
        P->next = NULL;
    }
}
void deleteAfter_103032330095(List &L, address Prec, address &P){
    P = Prec->next;
    Prec->next = P->next;
    P->next->prev = Prec;
    P->next = NULL;
    P->prev = NULL;
}

void deleteLast_103032330095(List &L, address &P){
    if (L.first == L.last){
        P = L.first;
        L.first = NULL;
        L.last = NULL;
    }else{
        P = L.last;
        L.last = P->prev;
        L.last->next = NULL;
        P->prev = NULL;
    }
}

void concat_103032330095(List L1, List L2,List &L3){
    L3 = L1;
    L3.last->next = L2.first;
    L2.first->prev = L3.last;
    L3.last = L2.last;
}

address findLagu_103032330095(List L, string Judul){
    if (isEmpty_103032330095(L)){
        cout << "Lagu tidak ditemukan"<<endl;
        return NULL;
    }else {
        address P;
        P = L.first;
        while (P != NULL){
            if (P->info.Judul == Judul){
                return P;
            }
            P = P->next;
        }
        cout << "Lagu tidak ditemukan"<<endl;
            return NULL;
    }
}

void removeLagu_103032330095(List &L, string Judul){
    if (isEmpty_103032330095(L)){
        cout << "List Lagu Kosong";
    }else{
        address P;
        P = findLagu_103032330095(L, Judul);
        if (P != NULL){
            if (P == L.first){
                deleteFirst_103032330095(L, P);
            }else if (P == L.last){
                deleteLast_103032330095(L,P);
            }else {
                address Prec;
                Prec = P->prev;
                deleteAfter_103032330095(L,Prec, P);
            }
            delete P;
        }
    }

}

void showAll_103032330095(List L){
    address P;
    P = L.first;
    while (P != NULL){
         cout << "Nama Band: " << P->info.namaBand<<endl;
         cout << "Judul Lagu: " << P->info.Judul <<endl;
         P = P->next;
    }
}

int tampilkanMenu() {
    int pilihan;
    cout << "===== MENU OPERASI ALBUM =====" << endl;
    cout << "1. Tambahkan Lagu ke Album 1" << endl;
    cout << "2. Tambahkan Lagu ke Album 2" << endl;
    cout << "3. Tampilkan Album 1" << endl;
    cout << "4. Tampilkan Album 2" << endl;
    cout << "5. Gabungkan Album 1 dan 2" << endl;
    cout << "6. Tambahkan Lagu Baru Setelah Lagu Tertentu" << endl;
    cout << "7. Hapus Lagu Pertama" << endl;
    cout << "8. Hapus Lagu Terakhir" << endl;
    cout << "9. Hapus Lagu Setelah Lagu Tertentu" << endl;
    cout << "10. Hapus Lagu Berdasarkan Judul" << endl;
    cout << "11. Cari Lagu Berdasarkan Judul" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih operasi: ";
    cin >> pilihan;
    return pilihan;
}

