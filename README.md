# gaji-karyawan-cpp
Program C++ untuk menghitung total gaji pegawai berdasarkan golongan

---

## 📋 Deskripsi
Program C++ ini digunakan untuk mencatat dan menghitung gaji karyawan berdasarkan input berupa NIM, nama, golongan, dan gaji pokok. Total gaji dihitung dari gaji pokok ditambah tunjangan (20%). Jabatan ditentukan berdasarkan golongan:

• A = Direktur

• B = Manager

• Lainnya = Staff

---

## 🛠️ Fitur

• Input jumlah karyawan

• Array dinamis untuk data NIM, nama, golongan, dan gaji

• Fungsi penentu jabatan

• Output tabel data gaji lengkap

---

###💡 Contoh Output
```yml
 Masukkan jumlah karyawan        : 2

 Masukkan NIM karyawan ke-1           : 1001
 Masukkan nama karyawan ke-1          : Ani
 Masukkan golongan karyawan ke-1      : A
 Masukkan gaji pokok karyawan ke-1    : Rp. 5000000

 Masukkan NIM karyawan ke-2           : 1002
 Masukkan nama karyawan ke-2          : Budi
 Masukkan golongan karyawan ke-2      : C
 Masukkan gaji pokok karyawan ke-2    : Rp. 3000000
```

---
```diff
                    DATA GAJI PEGAWAI PT MITRA SARANA                     
 =========================================================================
 |    NIM    |   Nama   | Golongan |  Jabatan  | Gaji Pokok | Tunjangan | Total Gaji |
 =========================================================================
 | 1001      | Ani      | A        | DIREKTUR  | Rp. 5000000 | Rp. 1000000 | Rp. 6000000 |
 | 1002      | Budi     | C        | STAFF     | Rp. 3000000 | Rp.  600000 | Rp. 3600000 |
 =========================================================================
```
---

## 🧾 Struktur Program

| Bagian | Penjelasan                                                  |
| ------ | ----------------------------------------------------------- |
| Input  | NIM, Nama, Golongan, Gaji Pokok                             |
| Proses | Tunjangan 20% dari gaji, total gaji                         |
| Output | Tabel NIM, Nama, Jabatan, Gaji Pokok, Tunjangan, Total Gaji |

---

**luqmanaru**
Program ini ditulis sebagai latihan pengolahan data array dinamis dan fungsi dalam bahasa C++.
