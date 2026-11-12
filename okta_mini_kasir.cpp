#include <iostream>
using namespace std;

int main() {
    int soto = 15000;
    int rawon = 20000;
    int jumlahSoto, jumlahRawon;
    int total, bayar, kembalian;

    cout<< "===== MINI KASIR =====" << endl;
    cout<< "Menu Makanan" << endl;
    cout<< "1. Soto  : Rp15000" << endl;
    cout<< "2. Rawon : Rp20000" << endl;

    cout<< "\nJumlah Soto  : ";
    cin>> jumlahSoto;

    cout<< "Jumlah Rawon : ";
    cin>> jumlahRawon;

    total = (jumlahSoto * soto) +
            (jumlahRawon * rawon);

    cout<< "===== STRUK PEMBELIAN =====" << endl;
    cout<< "Soto  : Rp" << jumlahSoto * soto << endl;
    cout<< "Rawon : Rp" << jumlahRawon * rawon << endl;
    cout<< "Total : Rp" << total << endl;

    cout<< "Uang Bayar : Rp";
    cin>> bayar;

    if (bayar >= total) {
        kembalian = bayar - total;
        cout << "Kembalian : Rp" << kembalian << endl;
        cout << "Terima kasih!" << endl;
    } else {
        cout << "Uang pembayaran kurang!" << endl;
    }

    return 0;
}

    
