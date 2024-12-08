#include "tp5.h"

int main(){
    List L;
    address P, minData;
    int pilihan = 0, i, n, data;
    createList_103032330095(L);
    pilihan = selectMenu_103032330095();
    while (pilihan != 0){
        switch(pilihan){
        case 1:
            cout << "Jumlah data yang akan ditambahkan : ";
            cin >> n;
            for (i = 1; i <= n; i++){
                cout << "Masukkan data baru : ";
                cin >> data;
                tambahData_103032330095(L, data);
            }
            break;

        case 2:
            showAllData_103032330095(L);
            break;

        case 3:
            cout << "Data terkecil dalam list : ";
            cout << findMin_103032330095(L) ->info << endl;
            break;

        case 4:
            cout << "Masukkan data yang akan ditambahkan ke tengah list : ";
            cin >> data;
            insertMiddle_103032330095(L, data);
            break;
        }
        pilihan = selectMenu_103032330095();
    }
    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
    return 0;
}
