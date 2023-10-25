#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    int pilihan;

    do{
        cout << "MENU PILIHAN : \n";
        cout << "1. Baca Data\n";
        cout << "2. Ubah Data\n";
        cout << "3. Hapus Data\n";
        cout << "4. Keluar\n";
        cout << "Pilihan Anda  (1/2/3/4) : ";
        cin >> pilihan;

        if (pilihan == 1) {
            cout << "Anda memilih Baca Data\n";
        } else if (pilihan == 2) {
            cout << "Anda memilih Ubah Data\n";
        } else if (pilihan == 3) {
            cout << "Anda memilih Hapus Data\n";
        } else if (pilihan == 4) {
            cout << "Anda memilih Keluar\n";
            system("exit");
        }
    } while (pilihan != 4);
}