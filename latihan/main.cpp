#include "11.h"

int main()
{
    List L;
    address P;
    int x;
    createList(L);
    for (int i = 1; i <= 6; i++){
        cin >> x;
        P = createNewElm(x);
        insertLast(L, P);
    }
    print(L);
    cout << endl;
    cout << L.last->info;
    cout << endl;
    redundanToUnik(L);
    print(L);
    cout << endl;
    cout << L.last->info;
    cout << endl;
    return 0;
}
