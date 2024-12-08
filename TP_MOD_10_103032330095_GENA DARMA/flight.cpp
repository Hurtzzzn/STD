#include "flight.h"

void createListJadwal_103032330095(ListJadwal &L){
    L.First = NULL;
}

adr_jadwalP createElemenJadwal_103032330095(infotype X){
    adr_jadwalP P = new elemenJadwal;
    P->info = X;
    P->next = NULL;
    return P;
}

void InsertLastJ_103032330095(ListJadwal &L, adr_jadwalP P){
    adr_jadwalP Q;
    if (L.First == NULL){
        L.First = P;
    }else{
        Q = L.First;
        while (Q->next != NULL){
            Q = Q->next;
        }
        Q->next = P;
    }
}

void ShowJadwal__103032330095(ListJadwal L){
    adr_jadwalP P;
    if (L.First == NULL){
        cout << "List Kosong!" << endl;
    }else{
        P = L.First;
        while (P!= NULL){
            cout << "Kode Penerbangan : " << P->info.Kode << " || " ;
            cout << "Jenis Penerbangan : " << P->info.Jenis << " || ";
            cout << "Tanggal Penerbangan : " << P->info.Tanggal << " || ";
            cout << "Waktu Penerbangan : " << P->info.Waktu << " || ";
            cout << "Asal Penerbangan : " << P->info.Asal << " || ";
            cout << "Tujuan Penerbangan : " << P->info.Tujuan << " || ";
            cout << "Kapasitas Penerbangan : " << P->info.Kapasitas << endl;
            cout << endl;
            P = P->next;
        }
    }
}

void deleteFirstJ__103032330095(ListJadwal &L,  adr_jadwalP &P){
    if (L.First == NULL){
        P = NULL;
    }else if (L.First->next == NULL){
        P = L.First;
        L.First = NULL;
    }else{
        P = L.First;
        L.First = P->next;
        P->next = NULL;
    }
}

adr_jadwalP SearchJ__103032330095(ListJadwal L, string dari, string ke, string tanggal){
    adr_jadwalP P;
    bool ketemu = false;
    P = L.First;
    while (P != NULL && !ketemu){
        ketemu = P->info.Asal == dari && P->info.Tujuan == ke && P->info.Tanggal == tanggal;
        if (!ketemu){
            P = P->next;
        }
    }
    return P;
}
