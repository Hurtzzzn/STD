#include <iostream>
using namespace std;

struct infotype {
    int tanggal;
    string namafile;
};

typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

void createList(List &L);

address createNewElm(int tanggal, string namafile);

void insertLast(List &L, address P);

int countX(string nmFile);

void deleteLastBackUp(List &L, string nmFile);

void print(List L);


