#include <iostream>

using namespace std;

const int nMax = 51;

struct mahasiswa{
    string NIM, nama;
    int nilai;
};

using arrayMahasiswa = mahasiswa[nMax];

int nilaiPertama(arrayMahasiswa T, int N, string NIM){
    int idx, i;
    idx = -1;
    i = 0;
    while (i < N && idx == -1) {
        if (T[i].NIM == NIM) {
            idx = i;
        }
        i++;
    }
    return idx;
}

int main() {
    arrayMahasiswa mhs;
    int N, idx, i;
    string NIM;
    cin >> N;
    if (N > nMax) {
        N = nMax;
    }
    for (i = 0; i < N; i++){
        cin >> mhs[i].NIM >> mhs[i].nama >> mhs[i].nilai;
    }
    cin >> NIM;
    idx = nilaiPertama(mhs, N, NIM);
    if (idx == -1){
        cout << idx;
    } else {
        cout << mhs[idx].nilai;
    }
    return 0;
}

