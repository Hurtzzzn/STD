#include <iostream>
using namespace std;

typedef struct elmList *address;

struct elmList {
    int info;
    address next;
};

struct List {
    address first;
    address last;
};

void createList(List &L);

address createNewElm(int x);

void insertLast(List &L, address P);

void deleteAfter(List &L, address &prec);

void redundanToUnik(List &L);

void print(List L);

