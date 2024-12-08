#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED

#include <iostream>

using namespace std;

struct Pasien {
    string Nama, klinik;
    int usia;
};

typedef Pasien infotype;

typedef struct elem *adr;

struct elem {
    infotype info;
    adr next;
    adr prev;
};

struct Queue{
    adr head;
    adr tail;
};

void createQueue(Queue &Q);

adr createNewElm(infotype X);

bool isEmpty(Queue Q);

void enqueue(Queue &Q, adr P);

void dequeue(Queue &Q, adr &P);

void pindahTesCovid(Queue &QReg, Queue &QCovid);

void print(Queue Q);

#endif // QUEUE_H_INCLUDED
