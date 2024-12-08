#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
using namespace std;

struct driver {
    string nama;
    float rating;
};

typedef driver infotype;
typedef struct elmList *address;

struct elmList{
    infotype info;
    address next;
    address prev;
};

struct List {
    address First;
    address Last;
};

void createList(List &L);

address createNewElemen(infotype X);

void insertFirst(List &L, address P);

void deleteFirst(List &L, address &P);

void showList(List L);

void resetList(List &L);

void splitList(List &L, List &LA, List &LB, float N);

#endif // DLL_H_INCLUDED
