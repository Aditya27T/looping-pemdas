#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    int saldo = 100000;
    int pilihan, jumlah;

    do {
        cout << "Selamat datang di Bank Indonesia Jaya" << endl;
        cout << "-------------------------------------------------" << endl;
        cout << "Saldo Anda: " << saldo << endl;
        cout << "1. Ambil Tabungan" << endl;
        cout << "2. Simpan Tabungan" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilihan Menu Transaksi(1/2/3): ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Jumlah uang yang akan diambil: ";
                cin >> jumlah;
                if (jumlah > saldo || saldo - jumlah <= 50000) {
                    cout << "Maaf, saldo tidak cukup." << endl;
                    // system("pause");
                    cin.ignore().get();
                    system("cls");
                    // system("clear");
                    
                } else if (jumlah < 50000) {
                    cout << "Maaf, minimal penarikan adalah 50000." << endl;
                    // system("pause");
                    cin.ignore().get();
                    system("cls");
                    // system("clear");
                } else {
                    saldo -= jumlah;
                    cout << "Berhasil menarik uang sebesar " << jumlah << endl;
                    // system("pause");
                    cin.ignore().get();
                    system("cls");
                    // system("clear");
                }
                break;
            case 2:
                cout << "Jumlah uang yang akan disimpan: ";
                cin >> jumlah;
                saldo += jumlah;
                cout << "Berhasil menyimpan uang sebesar " << jumlah << endl;
                cout << "press any key to continue...";
                // system("pause");
                cin.ignore().get();

                system("cls");
                // system("clear");
                break;
            case 3:
                cout << "Terima kasih telah menggunakan layanan kami." << endl;
                break;
            default:
                cout << "Pilihan tidak valid." << endl;
                system("cls");
                // system("clear");
                break;
        }
    } while (pilihan != 3);

    return 0;
}