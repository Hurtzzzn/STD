#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

#include <iostream>
using namespace std;

struct infotype {
    string namaPenumpang, namaDriver;
    int rating;
};

typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
};

struct List {
    address First;
};

void createList(List &L);

address createNewElemen(infotype X);

void insertFirst(List &L, address P);

void insertLast(List &L, address P);

void insertAfter(List &L, address Prec, address P);

void insertAfterValue(List &L, address P, int rating);

void Sorting(List &L);

void deleteFirst(List &L, address &P);

void deleteLast(List &L, address &P);

void deleteAfter(List &L, address Prec, address &P);

void deleteAfterValue(List &L, address &P, int rating);

void showList(List L);

void resetList(List &L);

void splitListSort(List &L1, List &L2, int rating);

void splitListUnSort(List &L1, List &L2);

float rataRataRating(List L);

#endif // SLL_H_INCLUDED
