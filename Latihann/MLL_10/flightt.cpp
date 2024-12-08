#include "flightt.h"

void createListJadwal_103032330095(ListJadwal &LJ){
    LJ.First = NULL;
}

adr_jadwalP createElemenJadwal_103032330095(infotypeJadwal X){
    adr_jadwalP P = new elemenJadwal;
    P->info = X;
    P->next = NULL;
    return P;
}

void InsertLastJ_103032330095(ListJadwal &LJ, adr_jadwalP P){
    adr_jadwalP Q;
    if (LJ.First == NULL){
        LJ.First = P;
    }else{
        Q = LJ.First;
        while (Q->next != NULL){
            Q = Q->next;
        }
        Q->next = P;
    }
}

void ShowJadwal__103032330095(ListJadwal LJ){
    adr_jadwalP P;
    if (LJ.First == NULL){
        cout << "=================LIST KOSONG!=================" << endl;
    }else{
        cout << "=================JADWAL=================" << endl;
        P = LJ.First;
        while (P != NULL){
            cout << "Kode : " << P->info.Kode << endl ;
            cout << "Jenis : " << P->info.Jenis << endl;
            cout << "Tanggal : " << P->info.Tanggal << endl;
            cout << "Waktu : " << P->info.Waktu << endl;
            cout << "Asal : " << P->info.Asal << endl;
            cout << "Tujuan : " << P->info.Tujuan << endl;
            cout << "Kapasitas : " << P->info.Kapasitas << endl;
            if (P->next != NULL){
                cout << endl;
            }
            P = P->next;
        }
        cout << "=======================================" << endl;
    }
}

void deleteFirstJ__103032330095(ListJadwal &LJ,  adr_jadwalP &P){
    if (LJ.First == NULL){
        P = NULL;
    }else if (LJ.First->next == NULL){
        P = LJ.First;
        LJ.First = NULL;
    }else{
        P = LJ.First;
        LJ.First = P->next;
        P->next = NULL;
    }
}

adr_jadwalP SearchJ__103032330095(ListJadwal LJ, string dari, string ke, string tanggal){
    adr_jadwalP P;
    bool ketemu = false;
    P = LJ.First;
    while (P != NULL && !ketemu){
        ketemu = P->info.Asal == dari && P->info.Tujuan == ke && P->info.Tanggal == tanggal;
        if (!ketemu){
            P = P->next;
        }
    }
    return P;
}

void createListPenumpang_103032330095(ListPenumpang &LP){
    LP.First = NULL;
}

adr_penumpangP createElemenPenumpang_103032330095(infotypePenumpang X){
    adr_penumpangP P = new elemenPenumpang;
    P->info = X;
    P->next = NULL;
    P->jadwalP = NULL;
    return P;
}

void InsertLastP_103032330095(ListPenumpang &LP, adr_penumpangP P){
    adr_penumpangP Q;
    if (LP.First == NULL){
        LP.First = P;
    }else{
        Q = LP.First;
        while (Q->next != NULL){
            Q = Q->next;
        }
        Q->next = P;
    }
}

void booking_103032330095(ListPenumpang &LP, infotypePenumpang X, ListJadwal LJ, string dari, string ke, string tanggal){
    adr_penumpangP P;
    adr_jadwalP Q;
    bool ketemu = false;
    Q = LJ.First;
    while (Q != NULL && !ketemu){
        ketemu = Q->info.Asal == dari && Q->info.Tujuan == ke && Q->info.Tanggal == tanggal;
        if (!ketemu) {
            Q = Q->next;
        }
    }
    if (ketemu){
        P = createElemenPenumpang_103032330095(X);
        P->jadwalP = Q;
        InsertLastP_103032330095(LP, P);
    } else {
        cout << endl << "=================TIDAK TERDAPAT JADWAL PENERBANGAN TERSEBUT=================" << endl;
        cout << endl;
    }
}

void showPenumpang_103032330095(ListPenumpang LP){
    adr_penumpangP P;
    if (LP.First == NULL){
        cout << "=================LIST KOSONG!=================" << endl;
    }else{
        cout << "=================PENUMPANG=================" << endl;
        P = LP.First;
        while (P != NULL){
            cout << "Nama : " << P->info.nama << endl ;
            cout << "NIK : " << P->info.nik << endl;
            cout << "Jenis Kelamin : " << P->info.jk << endl;
            cout << "Usia : " << P->info.usia << endl;
            cout << "Kode : " << P->jadwalP->info.Kode << endl;
            if (P->next != NULL){
                cout << endl;
            }
            P = P->next;
        }
        cout << "=======================================" << endl;
    }
}

void reschedule_103032330095(ListPenumpang &LP, ListJadwal LJ, string NIK, string newDari, string newKe, string newTanggal){
    adr_penumpangP P;
    adr_jadwalP Q;
    bool ketemu = false;
    Q = LJ.First;
    while (Q != NULL && !ketemu){
        ketemu = Q->info.Asal == newDari && Q->info.Tujuan == newKe && Q->info.Tanggal == newTanggal;
        if (!ketemu) {
            Q = Q->next;
        }
    }
    if (ketemu){
        P = LP.First;
        while (P != NULL && P->info.nik != NIK){
            P = P->next;
        }
        P->jadwalP = Q;
    } else {
        cout << endl << "=================TIDAK TERDAPAT JADWAL PENERBANGAN TERSEBUT=================" << endl;
        cout << endl;
    }
}

void showAllListPenumpang_103032330095(ListJadwal LJ, ListPenumpang LP, string kode){
    adr_penumpangP P;
    adr_jadwalP Q;
    bool ketemu = false;
    int totPenumpang = 0;
    cout << "=================PENUMPANG=================" << endl;
    Q = LJ.First;
    while (Q != NULL && !ketemu){
        ketemu = Q->info.Kode == kode;
        if (!ketemu){
            Q = Q->next;
        }
    }
    if (ketemu){
        P = LP.First;
        while (P != NULL){
            if (P->jadwalP->info.Kode == kode){
                cout << "Nama : " << P->info.nama << endl ;
                cout << "NIK : " << P->info.nik << endl;
                cout << endl;
                totPenumpang++;
            }
            P = P->next;
        }
        cout << "Total Penumpang : " << totPenumpang << endl;
        if (totPenumpang == 0){
            cout << "TIDAK TERDAPAT PENUMPANG DI KODE PENERBANGAN TERSEBUT!" << endl;
            cout << endl;
        }
    } else {
        cout << "KODE PENERBANGAN TERSEBUT TIDAK DITEMUKAN!" << endl;
        cout << endl;
    }
    cout << "=======================================" << endl;
}
