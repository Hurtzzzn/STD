#include "stack.h"

RakBuku createStack(){
    RakBuku S;
    S.top = -1;
    return S;
}

bool isEmpty(RakBuku S){
    return S.top == -1;
}

bool isFull(RakBuku S){
    return S.top == NMAX-1;
}

void Push(RakBuku &S, string judul, string penulis){
    if (!isFull(S)){
        S.top++;
        S.info[S.top].judul = judul;
        S.info[S.top].penulis = penulis;
    }
}

void Pop(RakBuku &S, string &judul, string &penulis){
    if (!isEmpty(S)){
        judul = S.info[S.top].judul;
        penulis = S.info[S.top].penulis;
        S.top--;
    }
}

void Get(RakBuku &S, string judul, string &namaPenulis){
    /*RakBuku tempStack = createStack();
    string tempJudul, tempPenulis;
    while (!isEmpty(S)) {
        Pop(S, tempJudul, tempPenulis);
        if (tempJudul == judul) {
            namaPenulis = tempPenulis;
        } else {
            Push(tempStack, tempJudul, tempPenulis);
        }
    }
    while (!isEmpty(tempStack)) {
        Pop(tempStack, tempJudul, tempPenulis);
        Push(S, tempJudul, tempPenulis);
    }*/
        string penulis, judulBuku;
    while (!isEmpty(S)){
        Pop(S, judulBuku, penulis);
        if (judulBuku == judul){
            namaPenulis = penulis;
        }
    }
}

void show(RakBuku S){
    while (!isEmpty(S)){
        cout << "Nama Buku : " << S.info[S.top].judul << endl;
        cout << "Nama Penulis : " << S.info[S.top].penulis << endl;
        S.top--;
    }
}

