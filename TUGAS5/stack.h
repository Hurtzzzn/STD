#include <iostream>
using namespace std;

const int NMAX = 3;

struct infoBuku {
    string judul, penulis;
} ;

typedef infoBuku infotype;

typedef int index;

struct Stack {
    infotype info[NMAX];
    index top;
};

typedef Stack RakBuku;

RakBuku createStack();

bool isEmpty(RakBuku S);

bool isFull(RakBuku S);

void Push(RakBuku &S, string judul, string penulis);

void Pop(RakBuku &S, string &judul, string &penulis);

void Get(RakBuku &S, string judul, string &namaPenulis);

void show(RakBuku S);

