#include <iostream>
using namespace std;

typedef struct elmList *address;

struct elmList {
    int info;
    address next;
    address prev;
};

struct List {
    address first;
};

void createList(List &L);

address createNewElm(int x);

void insertLast(List &L, address P);

void deleteFirst(List &L, address &P);

void print(List L);

bool hasOne(List L);



