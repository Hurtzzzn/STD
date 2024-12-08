#ifndef FLIGHTT_H_INCLUDED
#define FLIGHTT_H_INCLUDED

#include <iostream>
using namespace std;

struct penumpang{
    string nama, nik, jk;
    int usia;
};

struct jadwalPenerbangan{
    string Kode, Jenis, Tanggal, Waktu, Asal, Tujuan;
    int Kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;

typedef struct elemenPenumpang *adr_penumpangP;

typedef penumpang infotypePenumpang;

typedef jadwalPenerbangan infotypeJadwal;

struct elemenJadwal{
    infotypeJadwal info;
    adr_jadwalP next;
};

struct elemenPenumpang{
    infotypePenumpang info;
    adr_jadwalP jadwalP;
    adr_penumpangP next;
};

struct ListPenumpang {
    adr_penumpangP First;
};

struct ListJadwal {
    adr_jadwalP First;
};

void createListJadwal_103032330095(ListJadwal &LJ);

adr_jadwalP createElemenJadwal_103032330095(infotypeJadwal X);

void InsertLastJ_103032330095(ListJadwal &LJ, adr_jadwalP P);

void ShowJadwal__103032330095(ListJadwal LJ);

void deleteFirstJ__103032330095(ListJadwal &LJ,  adr_jadwalP &P);

adr_jadwalP SearchJ__103032330095(ListJadwal LJ, string dari, string ke, string tanggal);

void createListPenumpang_103032330095(ListPenumpang &LP);

adr_penumpangP createElemenPenumpang_103032330095(infotypePenumpang X);

void InsertLastP_103032330095(ListPenumpang &LP, adr_penumpangP P);

void booking_103032330095(ListPenumpang &LP, infotypePenumpang X, ListJadwal LJ, string dari, string ke, string tanggal);

void showPenumpang_103032330095(ListPenumpang LP);

void reschedule_103032330095(ListPenumpang &LP, ListJadwal LJ, string NIK, string newDari, string newKe, string newTanggal);

void showAllListPenumpang_103032330095(ListJadwal LJ, ListPenumpang LP, string kode);

#endif // FLIGHTT_H_INCLUDED
