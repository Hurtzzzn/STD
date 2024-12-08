#include <iostream>

using namespace std;

typedef int infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
};

struct List{
    address first;
};

void createList_103032330095(List &L);

address createNewElm_103032330095(infotype data);

void insertLast_103032330095(List &L, address P);

address findMin_103032330095(List L);

void insertMiddle_103032330095(List &L, int value);

void showAllData_103032330095(List L);

void tambahData_103032330095(List &L, int data);

int selectMenu_103032330095();
