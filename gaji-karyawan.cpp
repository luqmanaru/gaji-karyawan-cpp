#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/// Rumus fungsi (function) untuk menentukan jabatan sesuai dengan golongan
string jabatan(string golongan) {
    if (golongan == "A") {
        return "DIREKTUR";
    } else if (golongan == "B") {
        return "MANAGER";
    } else {
        return "STAFF";
    }
}

int main() {
    int jumlah_karyawan;

    /// Input jumlah karyawan
    cout << " Masukkan jumlah karyawan        : ";
    cin >> jumlah_karyawan;
    cout << endl;

    /// Rumus array untuk menyimpan data karyawan
    string nim[jumlah_karyawan], nama[jumlah_karyawan], golongan[jumlah_karyawan];
    int gaji_pokok[jumlah_karyawan];
    int tunjangan[jumlah_karyawan], total[jumlah_karyawan];

    /// Input data karyawan
    for (int i = 0; i < jumlah_karyawan; i++) {
        cout << " Masukkan NIM karyawan ke-" << i + 1 << "           : ";
        cin >> nim[i];

        cout << " Masukkan nama karyawan ke-" << i + 1 << "          : ";
        cin >> nama[i];

        cout << " Masukkan golongan karyawan ke-" << i + 1 << "      : ";
        cin >> golongan[i];

        cout << " Masukkan gaji pokok karyawan ke-" << i + 1 << "    : Rp. ";
        cin >> gaji_pokok[i];

        cout << endl;

        /// Rumus menghitung tunjangan
        tunjangan[i] = gaji_pokok[i] * 0.2;

        /// Rumus menghitung total gaji
        total[i] = gaji_pokok[i] + tunjangan[i];
    }

    /// Output
    cout << "                    DATA GAJI PEGAWAI PT MITRA SARANA                     " << endl;
    cout << " =========================================================================" << endl;
    cout << " |    NIM    |   Nama   | Golongan |  Jabatan  | Gaji Pokok | Tunjangan | Total Gaji |" << endl;
    cout << " =========================================================================" << endl;

    /// Menampilkan data karyawan
    for (int i = 0; i < jumlah_karyawan; i++) {
        cout << " | " << setw(8) << nim[i] << " | "
             << setw(8) << nama[i] << " | "
             << setw(8) << golongan[i] << " | "
             << setw(9) << jabatan(golongan[i]) << " | Rp. "
             << setw(9) << gaji_pokok[i] << " | Rp. "
             << setw(8) << tunjangan[i] << " | Rp. "
             << setw(10) << total[i] << " |" << endl;
    }

    cout << " =========================================================================" << endl;

    return 0;
}
