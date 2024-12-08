#include "dll.h"

int main()
{
    List L, LA, LB;
    address P;
    infotype X;
    float rataRataRating, N;
    int i;

    createList(L);
    createList(LA);
    createList(LB);

    for (i = 1; i <= 4; i++){
        cout << "Nama Driver : ";
        cin >> X.nama;
        cout << "Rating Driver : ";
        cin >> X.rating;
        P = createNewElemen(X);
        insertFirst(L, P);
    }

    cout << endl << "Data Driver di List : "<< endl;
    showList(L);

    deleteFirst(L, P);

    cout << endl <<"Data Driver setelah dilakukan penghapusan : " << endl;
    showList(L);

    cout << endl << "Data Driver setelah dilakukan reset : " << endl;
    resetList(L);

    cout << endl;
    showList(L);

    cout << endl << "Meminta inputan kembali : " << endl;
    for (i = 1; i <= 4; i++){
        cout << "Nama Driver : ";
        cin >> X.nama;
        cout << "Rating Driver : ";
        cin >> X.rating;
        P = createNewElemen(X);
        insertFirst(L, P);
    }

    cout << endl << "Data Driver di List : "<< endl;
    showList(L);

    cout << endl << "Masukkan N (0.00 <= N <= 5.00) : ";
    cin >> N;

    splitList(L, LA, LB, N);

    cout << endl << "Data Driver di List Awal : "<< endl;
    showList(L);

    cout << endl << "Data Driver di List kurang dari N : "<< endl;
    showList(LA);

    cout << endl << "Data Driver di List lebih dari N : "<< endl;
    showList(LB);
    return 0;
}
