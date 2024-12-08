#include "flight.h"

int main()
{
    ListJadwal L;
    infotype X;
    adr_jadwalP P;
    int n, i;
    string dari, ke, tanggal;

    createListJadwal_103032330095(L);
    cout << "N : ";
    cin >> n;

    for (i = 1; i <= n; i++){
        cout << "Kode Penerbangan : ";
        cin >> X.Kode;
        cout << "Jenis Penerbangan : ";
        cin >> X.Jenis;
        cout << "Tanggal Penerbangan : ";
        cin >> X.Tanggal;
        cout << "Waktu Penerbangan : ";
        cin >> X.Waktu;
        cout << "Asal Penerbangan : ";
        cin >> X.Asal;
        cout << "Tujuan Penerbangan : ";
        cin >> X.Tujuan;
        cout << "Kapasitas Penerbangan : ";
        cin >> X.Kapasitas;
        cout << endl;
        P = createElemenJadwal_103032330095(X);
        InsertLastJ_103032330095(L, P);
    }

    cout << "Data List Jadwal awal : " << endl;
    ShowJadwal__103032330095(L);

    cout << "Data setelah  dilakukan penghapusan : " << endl;
    deleteFirstJ__103032330095(L, P);
    ShowJadwal__103032330095(L);

    cout << "Cari jadwal penerbangan : " << endl;
    cout << "Dari : ";
    cin >> dari;
    cout << "Ke : ";
    cin >> ke;
    cout << "Tanggal : ";
    cin >> tanggal;

    P = SearchJ__103032330095(L, dari, ke, tanggal);
    if (P != NULL){
         cout << endl << "Jadwal penerbangan ditemukan!" << endl;
         cout << "Kode Penerbangan : " << P->info.Kode << " || " ;
         cout << "Jenis Penerbangan : " << P->info.Jenis << " || ";
         cout << "Tanggal Penerbangan : " << P->info.Tanggal << " || ";
         cout << "Waktu Penerbangan : " << P->info.Waktu << " || ";
         cout << "Asal Penerbangan : " << P->info.Asal << " || ";
         cout << "Tujuan Penerbangan : " << P->info.Tujuan << " || ";
         cout << "Kapasitas Penerbangan : " << P->info.Kapasitas << endl;
         cout << endl;
    } else {
        cout << endl << "Jadwal penerbangan tidak ditemukan!" << endl;
    }

    return 0;
}
