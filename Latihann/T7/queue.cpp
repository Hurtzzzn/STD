#include "queue.h"

void createQueue(Queue &Q){
    Q.head = NULL;
    Q.tail = NULL;
}

adr createNewElm(infotype X){
    adr P = new elem;
    P->info = X;
    P->next = NULL;
    P->prev = NULL;
    return P;
}

bool isEmpty(Queue Q){
    return Q.head == NULL && Q.tail == NULL;
}

void enqueue(Queue &Q, adr P){
    if (isEmpty(Q)){
        Q.head = P;
        Q.tail = P;
    } else {
        P->prev = Q.tail;
        Q.tail->next = P;
        Q.tail = P;
    }
}

void dequeue(Queue &Q, adr &P){
    P = Q.head;
    if (!isEmpty(Q)){
        if (Q.head != Q.tail){
            Q.head = P->next;
            P->next = NULL;
            Q.head->prev = NULL;
        } else {
            Q.head = NULL;
            Q.tail = NULL;
        }
    }
}

void pindahTesCovid(Queue &QReg, Queue &QCovid){
    adr P;
    int i;
    i = 0;
    if (isEmpty(QCovid)){
        while (i < 3 && !isEmpty(QReg)){
            dequeue(QReg, P);
            if (P != NULL){
                enqueue(QCovid, P);
            }
            i++;
        }
    } else {
        cout << "PEMINDAHAN TIDAK BISA DILAKUKAN" << endl;
    }
}

void print(Queue Q){
    adr P;
    if (isEmpty(Q)){
        cout << "Queue Kosong!" << endl;
    } else {
        P = Q.head;
        while (P != NULL){
            cout << "Nama Pasien : " << P->info.Nama << endl;
            cout << "Usia Pasien : " << P->info.usia << endl;
            cout << "Klinik Pasien : " << P->info.klinik << endl;
            P = P->next;
        }
    }
}
