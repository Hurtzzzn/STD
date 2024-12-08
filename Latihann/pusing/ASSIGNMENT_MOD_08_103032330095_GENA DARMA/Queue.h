#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>

using namespace std;

struct Infotype {
    string nama;
    int usia;
    string pekerjaan;
    bool prioritas;
    int nomor_antrean;
    bool kondisi_darurat;
};

typedef struct ElemQ *Address;

struct ElemQ {
    Infotype info;
    Address next;
};

struct Queue{
    Address head;
    Address tail;
};

void createQueue_103032330095(Queue &Q);

bool isEmpty_103032330095(Queue Q);

Address createElemQueue_103032330095(string nama, int usia, string pekerjaan, int nomor_antrean);

void enqueue_103032330095(Queue &Q, Address P);

void dequeue_103032330095(Queue &Q, Address &P);

Address front_103032330095(Queue Q);

Address back_103032330095(Queue Q);

int size_103032330095(Queue Q);

void printInfo_103032330095(Queue Q);

void serveQueue_103032330095(Queue &Q);

void reassignQueue_103032330095(Queue &Q);

void checkWaitingTime_103032330095(Queue &Q, int waktu_sekarang);

void emergencyHandle_103032330095(Queue &Q, int nomor_antrean);

void updatePriority_103032330095(Queue &Q);

Address findAndRemove_103032330095(Queue &Q, int nomor_antrean);

#endif // QUEUE_H_INCLUDED
