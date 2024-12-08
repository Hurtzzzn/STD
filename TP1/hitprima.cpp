/*#include <iostream>

using namespace std;

int main(){
    int i, j,n,ganjil, genap;
    bool prima, hasil;
    cout << "masukan n: ";
    cin >> n;
    if (n > 1) {
        genap = 1;
        hasil = true;
        for (i = 3; i <= n; i++) {
            for (j = i -1; j > 1; j--){
                    prima = i % j != 0;
                hasil = hasil && prima;
            }
            if (hasil) {
                ganjil++;
            }
            hasil = true;
        }

    }
    cout << genap << endl;
    cout << ganjil << endl;
    return 0;


}
*/


