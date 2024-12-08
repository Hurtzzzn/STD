#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>

using namespace std;

const int Nmax1 = 56;

const int Nmax2 = 14'

struct elmStack1 {
    string kodeMK, namaMK;
    int semester,tahun;
    char nilai;
};

struct S1 {
    elmStack1 tab[Nmax1];
    int Top;
};

struct elmStack2 {
    string kodeMK, namaMK;
    char nilai;
};

struct S2 {
    elmStack2 tab[Nmax2];
    int Top;
};

void pop(S1 &history, string &kode, &nama, char &nilai );

#endif // STACK_H_INCLUDED
