#include <iostream>
#include <string>

using namespace std;

struct ctg {
    string tanggal;
    double harian;
    double mingguan;
    double bulanan;
};

int main() {
    // Total index array
    ctg category[4];

    // Input data untuk setiap category
    cout << "Data Pengeluaran" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Minggu ke-" << (i + 1) << endl;
        cout << "Tanggal: ";
        cin >> category[i].tanggal;
        cout << "Pengeluaran harian: ";
        cin >> category[i].harian;

        // Hitung mingguan
        category[i].mingguan = category[i].harian * 7;

        cout << "Total dalam sebulan: ";
        cin >> category[i].bulanan;
    }

    // Output data
    for (int i = 0; i < 4; i++) {
        cout << "====================================" << endl;
        cout << "Output" << endl;
        cout << "Minggu ke-" << (i + 1) << ": " << category[i].mingguan << endl;
        cout << "Pada Tanggal: " << category[i].tanggal << endl;
        cout << "Total Dalam Sebulan: " << category[i].bulanan << endl;
    }

    return 0;
}
