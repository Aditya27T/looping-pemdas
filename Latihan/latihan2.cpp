#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int awal, akhir;

    cout << "Masukkan nilai awal: ";
    cin >> awal;
    cout << "Masukkan nilai akhir: ";
    cin >> akhir;

    cout << endl;
    cout << "Deret bilangan ganjil dari " << awal << " sampai " << akhir << " adalah: " << endl;

    while (awal <= akhir) {
        if (awal % 2 != 0) {
            cout << awal << " ";
        }
        awal++;
    }

    getch();
}