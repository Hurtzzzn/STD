#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
using namespace std;

struct jadwalPenerbangan{
    string Kode;
    string Jenis;
    string Tanggal;
    string Waktu;
    string Asal;
    string Tujuan;
    int Kapasitas;
};

typedef struct elemenJadwal *adr_jadwalP;

typedef jadwalPenerbangan infotype;

struct elemenJadwal{
    infotype info;
    adr_jadwalP next;
};

struct ListJadwal {
    adr_jadwalP First;
};

void createListJadwal_103032330095(ListJadwal &L);

adr_jadwalP createElemenJadwal_103032330095(infotype X);

void InsertLastJ_103032330095(ListJadwal &L, adr_jadwalP P);

void ShowJadwal__103032330095(ListJadwal L);

void deleteFirstJ__103032330095(ListJadwal &L,  adr_jadwalP &P);

adr_jadwalP SearchJ__103032330095(ListJadwal L, string dari, string ke, string tanggal);


#endif // FLIGHT_H_INCLUDED
