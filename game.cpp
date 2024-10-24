#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    srand(time(0)); // program akan menghasilkan hasil yang acak sekali putaran

    int Komputer;
    int Pemain;
    //skor ini digunakan untuk menyimpan skor game dari awal
    int skorPemain = 0;
    int skorKomputer = 0;

    while (true) {
        cout << "+----------------------------------+" << endl;
        cout << "|     Game Kertas Batu Gunting     |" << endl;
        cout << "+----------------------------------+" << endl;
        cout << "|          1. Kertas               |" << endl;
        cout << "|          2. Batu                 |" << endl;
        cout << "|          3. Gunting              |" << endl;
        cout << "|          4. Keluar               |" << endl;
        cout << "+----------------------------------+" << endl;
        cout << "  Pilih: ";
        cin >> Pemain;
        if (Pemain == 4) {
            break;
        }

        if (Pemain < 1 || Pemain > 3) {
            cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
            continue;
        }

        //di bawah ini merupakan code agar komputer memilih acak
        Komputer = rand() % 3 + 1;
        cout << "+----------------------------------+" << endl;
        cout << "| Pilihan komputer: ";
        switch (Komputer) {
            case 1:
                cout << "Kertas         |" << endl;
                break;
            case 2:
                cout << "Batu             |" << endl;
                break;
            case 3:
                cout << "Gunting        |" << endl;
                break;
        }

        cout << "| Pilihan pemain: ";
        switch (Pemain) {
            case 1:
                cout << "Kertas           |" << endl;
                break;
            case 2:
                cout << "Batu             |" << endl;
                break;
            case 3:
                cout << "Gunting          |" << endl;
                break;
        }
        
        cout << "|                                  |" << endl;

        if (Pemain == Komputer) {
            cout << "| Seri!                            |" << endl;
        } else if ((Pemain == 1 && Komputer == 2) ||
                   (Pemain == 2 && Komputer == 3) ||
                   (Pemain == 3 && Komputer == 1)) {
            cout << "| Pemain menang!                   |" << endl;
            skorPemain++;
        } else {
            cout << "| Komputer menang!                 |" << endl;
            skorKomputer++;
        }

        cout << "+----------------------------------+" << endl;
        cout << "| Skor: Pemain " << skorPemain << " - Komputer " << skorKomputer << "      |" << endl; 
        cout << "+----------------------------------+" << endl;
        cout << endl;
    }

    return 0;
}