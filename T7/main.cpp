#include "queue.h"

int main()
{
    Queue QReg, QCovid;
    adr P;
    infotype X;
    int i;
    createQueue(QReg);
    createQueue(QCovid);
    for (i = 1; i <= 2; i++){
        cout << "Nama Pasien : ";
        cin >> X.Nama;
        cout << "Usia Pasien : ";
        cin >> X.usia;
        cout << "Klinik Pasien : ";
        cin >> X.klinik;
        P = createNewElm(X);
        enqueue(QReg, P);
    }
    cout << endl;
    print(QReg);
    pindahTesCovid(QReg, QCovid);
    cout << endl;
    print(QCovid);
    cout << endl;
    print(QReg);
}
