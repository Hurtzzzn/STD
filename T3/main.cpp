#include <iostream>

using namespace std;

typedef float infotype;

typedef struct Elm *address;

struct Elm {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L){
    L.first = NULL;
};

address createNewElement(infotype x){
    address P;
    P = new Elm;
    P ->info =x;
    P->next = NULL;
    return P;
}

address maxElm(List L, address P){
    address prec, temp;
    prec = NULL;
    temp = L.first;
    while (temp != NULL && P -> info >  temp-> info) {
        prec = temp;
        temp = temp->next;
    }

    return prec;
}

void insertAscending(List &L ,address P){
    address prec;
    prec = maxElm(L, P);
    if (prec != NULL) {
            P->next = prec ->next;
            prec ->next = P;
    } else {
        P->next = L.first;
        L.first = P;
    }


}
void Show(List L){
    address P;
    if (L.first != NULL){
        P = L.first;
        while (P != NULL){
            cout << P ->info << endl;
            P = P ->next;
        }
    }
}

int main()
{
    List L;
    address P, prec;
    float x;
    createList(L);
    for (int i = 1; i <= 5; i++){
        cin >> x;
        P = createNewElement(x);
        insertAscending(L, prec, P);
    }

    Show(L);
}
