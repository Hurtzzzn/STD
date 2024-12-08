#include "Queue.h"

int main()
{
    // Membuat antrean
    Queue Q;
    createQueue_103032330095(Q);
    Address P1, P2, P3, P4, P5;

    // Menambahkan beberapa elemen ke dalam queue
    P1 = createElemQueue_103032330095("John Doe", 65, "lansia", 1);
    P2 = createElemQueue_103032330095("Alice", 30, "tenaga kesehatan", 2);
    P3 = createElemQueue_103032330095("Bob", 25, "pekerja", 3);
    P4 = createElemQueue_103032330095("Charlie", 70, "pensiunan", 4);
    P5 = createElemQueue_103032330095("David", 28, "pekerja", 5);

    enqueue_103032330095(Q, P1);
    enqueue_103032330095(Q, P2);
    enqueue_103032330095(Q, P3);
    enqueue_103032330095(Q, P4);
    enqueue_103032330095(Q, P5);

    // Menampilkan isi queue
    cout << "Isi antrean awal:" << endl;
    printInfo_103032330095(Q);

    // Melayani antrean
    cout << "\nMelakukan pelayanan pada antrean:" << endl;
    serveQueue_103032330095(Q);

    // Memeriksa antrean setelah pelayanan
    cout << "\nIsi antrean setelah pelayanan:" << endl;
    printInfo_103032330095(Q);

    // Menambahkan elemen baru untuk simulasi pengaturan ulang prioritas
    Address P6 = createElemQueue_103032330095("Edward", 22, "pekerja", 6);
    enqueue_103032330095(Q, P6);

    // Simulasi reassignQueue untuk mengatur ulang antrean ke prioritas
    cout << "\nMengatur ulang antrean berdasarkan prioritas:" << endl;
    reassignQueue_103032330095(Q);
    printInfo_103032330095(Q);

    // Simulasi kondisi warga yang menunggu lebih dari 2 jam
    cout << "\nMemeriksa waktu tunggu dan mengubah prioritas jika lebih dari 2 jam:" << endl;
    checkWaitingTime_103032330095(Q, 130); // Asumsikan waktu sekarang 130 menit dari nomor antrean pertama
    printInfo_103032330095(Q);

    // Menangani kondisi darurat untuk seorang warga
    cout << "\nMenangani kondisi darurat untuk warga dengan nomor antrean 5:" << endl;
    emergencyHandle_103032330095(Q, 5);
    printInfo_103032330095(Q);

    // Update prioritas warga setiap jam
    cout << "\nMengupdate prioritas antrean setiap jam:" << endl;
    updatePriority_103032330095(Q);
    printInfo_103032330095(Q);

    // Mencari dan menghapus warga dengan nomor antrean tertentu
    cout << "\nMenghapus warga dengan nomor antrean 3:" << endl;
    Address removedElem = findAndRemove_103032330095(Q, 3);
    if (removedElem) {
        cout << "Warga yang dihapus: " << removedElem->info.nama << endl;
    }
    printInfo_103032330095(Q);

    // Mengecek ukuran queue
    cout << "\nUkuran antrean saat ini: " << size_103032330095(Q) << endl;

    return 0;
}
