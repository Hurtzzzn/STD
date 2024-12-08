#include "stack.h"

int main()
{
    RakBuku S;
    string judul, penulis;
    S = createStack();
    while (!isFull(S)){
        cout << "MASUKKAN BUKU : ";
        cin >> judul;
        cout << "Penulis : ";
        cin >> penulis;
        Push(S, judul, penulis);
    }
    show(S);
    cout << "BUKU YANG DIABMBIL : ";
    cin >> judul;
    Get(S, judul, penulis);
    cout << penulis;
    return 0;
}
