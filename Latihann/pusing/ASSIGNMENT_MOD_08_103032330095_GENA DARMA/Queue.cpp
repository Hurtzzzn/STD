#include "Queue.h"

void createQueue_103032330095(Queue &Q){
    Q.head = NULL;
    Q.tail = NULL;
}

bool isEmpty_103032330095(Queue Q){
    return Q.head == NULL;
}

Address createElemQueue_103032330095(string nama, int usia, string pekerjaan, int nomor_antrean){
    Address P = new ElemQ;
    P->info.nama = nama;
    P->info.usia = usia;
    P->info.pekerjaan = pekerjaan;
    P->info.prioritas = (usia >= 60 || pekerjaan == "tenaga kesehatan");
    P->info.nomor_antrean = nomor_antrean;
    P->info.kondisi_darurat = false;
    P->next = NULL;
    return P;
}

void enqueue_103032330095(Queue &Q, Address P){
    if (isEmpty_103032330095(Q)) {
        Q.head = P;
        Q.tail = P;
    } else if (P->info.prioritas) {
        if (!Q.head->info.prioritas) {
            P->next = Q.head;
            Q.head = P;
        } else {
            Address temp = Q.head;
            while (temp->next != NULL && temp->next->info.prioritas) {
                temp = temp->next;
            }
            P->next = temp->next;
            temp->next = P;
            if (P->next == NULL) {
                Q.tail = P;
            }
        }
    } else {
        Q.tail->next = P;
        Q.tail = P;
    }
}

void dequeue_103032330095(Queue &Q, Address &P){
    if (isEmpty_103032330095(Q)){
        P = NULL;
        cout << "Semua warga telah terlayani." << endl;
    } else {
        P = Q.head;
        Q.head = Q.head->next;
        if (Q.head == NULL){
            Q.tail = NULL;
        }
        P->next = NULL;
    }
}

Address front_103032330095(Queue Q){
    return Q.head;
}

Address back_103032330095(Queue Q){
    return Q.tail;
}

int size_103032330095(Queue Q){
    int count = 0;
    Address temp = Q.head;
    while (temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void printInfo_103032330095(Queue Q){
    Address P;
    if (isEmpty_103032330095(Q)){
        cout << "Antrean Kosong." << endl;
    } else {
        cout << "Daftar Antrean : " << endl;
        P = Q.head;
        while (P != NULL){
            cout << "Nama : " << P->info.nama << endl;
            cout << "Usia : " << P->info.usia << endl;
            cout << "Pekerjaan : " << P->info.pekerjaan << endl;
            if (P->info.prioritas){
                cout << "Prioritas : Ya" << endl;
            } else {
                cout << "Prioritas : Tidak" << endl;
            }
            cout << "Nomor Antrean : " << P->info.nomor_antrean << endl;
            cout << "--------------------------" << endl;
            P = P->next;
        }
    }
}

void serveQueue_103032330095(Queue &Q){
    int maks = 0;
    Address P;
    if (isEmpty_103032330095(Q)){
        cout << "Antrean kosong" << endl;
    } else {
        while (!isEmpty_103032330095(Q) && maks < 100){
            dequeue_103032330095(Q, P);
            cout << "Melayani warga : " << endl;
            cout << "Nama : " << P->info.nama << endl;
            cout << "Usia : " << P->info.usia << endl;
            cout << "Pekerjaan : " << P->info.pekerjaan << endl;
            if (P->info.prioritas){
                cout << "Prioritas : Ya" << endl;
            } else {
                cout << "Prioritas : Tidak" << endl;
            }
            cout << "Vaksinasi berhasil." << endl;
            cout << "--------------------------" << endl;
            maks++;
        }
        if (maks == 100) {
            cout << "Kapasitas pelayanan harian telah penuh!" << endl;
        }
        if (!isEmpty_103032330095(Q)){
            cout << "Bagi warga yang belum terlayani, harap hadir kembali besok." << endl;
        }
    }
}

void reassignQueue_103032330095(Queue &Q){
    Queue R;
    int sizeQueue, i;
    Address P;
    createQueue_103032330095(R);
    sizeQueue = size_103032330095(Q);
    for (i = 1; i <= sizeQueue; i++){
        dequeue_103032330095(Q, P);
        enqueue_103032330095(R, P);
    }
    Q = R;
}

void checkWaitingTime_103032330095(Queue &Q, int waktu_sekarang){
    Address P;
    if (waktu_sekarang > 120) {
        P = Q.head;
        while (P != NULL){
            P->info.prioritas = true;
            P = P->next;
        }
    }
    reassignQueue_103032330095(Q);
}

void emergencyHandle_103032330095(Queue &Q, int nomor_antrean){
    Address P;
    P = findAndRemove_103032330095(Q, nomor_antrean);
    if (P != NULL) {
        P->info.kondisi_darurat = true;
        P->info.prioritas = true;
        P->next = Q.head;
        Q.head = P;
    }
}

void updatePriority_103032330095(Queue &Q){
    Address P, R;
    checkWaitingTime_103032330095(Q, 130);
    P = Q.head;
    while (P != NULL){
        if (P->info.kondisi_darurat){
            R= P->next;
            emergencyHandle_103032330095(Q, P->info.nomor_antrean);
            P = R;
        } else {
            P = P->next;
        }
    }
}

Address findAndRemove_103032330095(Queue &Q, int nomor_antrean){
    Address P, R;
    bool ketemu = false;
    P = Q.head;
    while (P != NULL && !ketemu){
        ketemu = P->info.nomor_antrean == nomor_antrean;
        if (!ketemu){
            P = P->next;
        }
    }
    if (ketemu){
        if (P == Q.head){
            dequeue_103032330095(Q, P);
        } else {
            R = Q.head;
            while (R->next != P){
                R = R->next;
            }
            if (P == Q.tail) {
                R->next = NULL;
            } else {
                R->next = P->next;
                P->next = NULL;
            }
        }
    } else {
        cout << "Warga dengan nomor antrean " << nomor_antrean << " tidak ditemukan dalam antrean" << endl;
    }
    return P;

}
