#include "dll.h"

int main(){
    List L;
    address P, Q;
    string username;
    createList(L);
    for (int i = 1; i <= 4; i++){
        cout << "Input akun : ";
        cin >> username;
        Q = findAkun(L, username);
        signUp(L, username);
        if (Q != NULL){
            i--;
        }
    }
    show(L);
    while (L.first != NULL && L.last != NULL){
        cout << "Akun yang mau dihapus : ";
        cin >> username;
        removeAkun(L, username);
        show(L);
    }
    return 0;
}
