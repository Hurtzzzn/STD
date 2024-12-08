#include "1.h"

int main()
{
    List L;
    address P;
    int x;
    createList(L);
    cin >> x;
    P = createNewElm(x);
    insertLast(L, P);
    cout << hasOne(L) << endl;
    for (int i = 2; i<= 3; i++){
        cin >> x;
        P = createNewElm(x);
        insertLast(L, P);
        cout << hasOne(L) << endl;
    }
    print(L);
    deleteFirst(L, P);
    print(L);
        cout << hasOne(L) << endl;
    deleteFirst(L, P);
    print(L);
    cout << hasOne(L) << endl;
    deleteFirst(L, P);
    print(L);
    return 0;
}
