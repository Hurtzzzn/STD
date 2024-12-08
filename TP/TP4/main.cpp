#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List L;
    address P;
    int x, i;
    createList(L);
    cout << "Masukkan NIM perdigit" << endl;
    for (i = 1; i <= 3; i++){
        cout << "Digit " << i << ": ";
        cin >> x;
        P = allocate(x);
        insertFirst(L, P);
    }
    printInfo(L);
    return 0;
}
