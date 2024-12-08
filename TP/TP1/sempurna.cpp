#include <iostream>

using namespace std;

int main() {
    int jumlah, i, n;
    bool faktor;
    jumlah = 0;
    cin >> n;
    for  (i = n - 1; i > 0; i--) {
            faktor = n % i == 0;
            if (faktor) {
                jumlah += i;
            }
        }
        if (jumlah == n ) {
           cout << "yes" << endl;
        }else {
            cout << "no";
        }
        return 0;




}
