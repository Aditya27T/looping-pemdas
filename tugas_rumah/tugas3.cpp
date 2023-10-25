#include <iostream>
#include <string>
#include <unistd.h>
#include <stdlib.h>



using namespace std;

void loading ()
{
    cout << "Press any key to continue... \n";
    cin.ignore().get();
    for (int i = 0; i < 3; i++)
    {
        cout << "===================";
        cout.flush();
        sleep(1);
    }
    system("clear");
}

int main()
{
    int saldo = 100000;
    int pilihan, jumlah;
    string judul = "Selamat Datang di Bank Indonesia";

    do
    {

        for (int row = 1; row <= 5; row++)
        {
            for (int col = 1; col <= 40; col++)
            {
                if (row == 3 && col == 5)
                {
                    cout << judul;
                    col += judul.length() - 1;
                }
                else

                    if (row == 1 || row == 5)
                {
                    cout << "=";
                }
                else if (col == 1 || col == 40)
                {
                    cout << "|";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }

        cout << "Saldo Anda saat ini: " << saldo << endl;
        cout << "Silahkan pilih menu di bawah ini:" << endl;
        cout << "1. Ambil uang" << endl;
        cout << "2. Simpan uang" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Saldo Anda saat ini: " << saldo << endl;
            cout << "Jumlah uang yang akan diambil: ";
            cin >> jumlah;
            if (jumlah > saldo || saldo - jumlah <= 50000)
            {
                cout << "Saldo Anda tidak mencukupi." << endl;
                loading();
            }
            else if (jumlah % 50000 != 0)
            {
                cout << "Jumlah uang yang akan diambil harus kelipatan 50000." << endl;
                loading();
            }
            else
            {
                saldo -= jumlah;
                cout << "Berhasil mengambil uang sebesar " << jumlah << endl;
                cout << "Sisa Saldo Anda saat ini: " << saldo << endl;
                loading();
            }
            break;

        case 2:
            cout << "Saldo Anda saat ini: " << saldo << endl;
            cout << "Jumlah uang yang akan disimpan: ";
            cin >> jumlah;
            if (jumlah < 50000 || jumlah % 50000 != 0)
            {
                cout << "Jumlah uang yang akan disimpan harus kelipatan 50000." << endl;
                loading();
            }
            else
            {
                saldo += jumlah;
                cout << "Berhasil menyimpan uang sebesar " << jumlah << endl;
                cout << "Saldo Anda saat ini: " << saldo << endl;
                loading();
            }
        case 3:
            cout << "Terima kasih telah menggunakan layanan kami." << endl;
            break;
        default:
            cout << "Pilihan tidak valid." << endl;
            loading();
            break;
        }
    } while (pilihan != 3);

    return 0;
}
