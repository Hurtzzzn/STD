#include "flightt.h"

int main()
{
    ListJadwal LJ;
    ListPenumpang LP;
    infotypeJadwal X;
    infotypePenumpang Y;
    adr_jadwalP P;
    adr_penumpangP Q;
    string dari, ke, tanggal, kode, NIK;
    int i;

    createListJadwal_103032330095(LJ);

    cout << "Input Penerbangan" << endl;
    for (i = 1; i <= 4; i++){
        cout << "Data ke-" << i << endl;
        cout << "Kode : ";
        cin >> X.Kode;
        cout << "Jenis : ";
        cin >> X.Jenis;
        cout << "Tanggal : ";
        cin >> X.Tanggal;
        cout << "Waktu : ";
        cin >> X.Waktu;
        cout << "Asal : ";
        cin >> X.Asal;
        cout << "Tujuan : ";
        cin >> X.Tujuan;
        cout << "Kapasitas : ";
        cin >> X.Kapasitas;
        cout << endl;
        P = createElemenJadwal_103032330095(X);
        InsertLastJ_103032330095(LJ, P);
    }

    ShowJadwal__103032330095(LJ);

    createListPenumpang_103032330095(LP);

    cout << endl << "Input Jadwal" << endl;
    for (i = 1; i <= 6; i++){
        cout << "Data ke-" << i << endl;
        cout << "Nama : ";
        cin >> Y.nama;
        cout << "NIK : ";
        cin >> Y.nik;
        cout << "Jenis Kelamin : ";
        cin >> Y.jk;
        cout << "Usia : ";
        cin >> Y.usia;
        cout << "Asal Penerbangan : ";
        cin >> dari;
        cout << "Tujuan Penerbangan : ";
        cin >> ke;
        cout << "Tanggal Penerbangan : ";
        cin >> tanggal;
        cout << endl;
        booking_103032330095(LP, Y, LJ, dari, ke, tanggal);
    }

    showPenumpang_103032330095(LP);

    cout  << endl << "Tampilkan Penumpang Berdasarkan Kode Penerbaangan" << endl;
    cout << "Kode : ";
    cin >> kode;
    cout << endl;
    showAllListPenumpang_103032330095(LJ, LP, kode);

    cout << endl << "Reschedule" << endl;
    cout << "NIK : ";
    cin >> NIK;
    cout << "Asal : ";
    cin >> dari;
    cout << "Tujuan : ";
    cin >> ke;
    cout << "Tanggal : ";
    cin >> tanggal;
    reschedule_103032330095(LP, LJ, NIK, dari, ke, tanggal);

    cout  << endl << "Tampilkan Penumpang Berdasarkan Kode Penerbaangan" << endl;
    cout << "Kode : ";
    cin >> kode;
    cout << endl;
    showAllListPenumpang_103032330095(LJ, LP, kode);

    return 0;
}
