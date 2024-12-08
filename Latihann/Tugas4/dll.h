#include <iostream>

using namespace std;

typedef string infotype;
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

address createNewElm(infotype akun);

void insertLast(List &L, address P);

address findAkun(List L, string username);

void signUp(List &L, infotype akun);

void deleteFirst(List &L, address &P);

void deleteAfter(address Q, address &P);

void deleteLast(List &L, address &P);

void removeAkun(List &L, string username);

void show(List L);
