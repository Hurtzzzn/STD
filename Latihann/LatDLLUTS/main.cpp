#include "3.h"

int main()
{
     List L;
    address P;
    int x;
    string y, file;
    createList(L);
    for (int i = 1; i <= 5; i++){
        cin >> x;
        cin >> y;
        P = createNewElm(x,y);
        insertLast(L, P);
    }
    print(L);
    cout << endl;
    cin >> file;
    deleteLastBackUp(L, file);
    print(L);
    return 0;
}
