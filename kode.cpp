#include <iostream>
#include <string>
using namespace std;

struct Karyawan {
    string nama;
    string nik;
    string tanggalLahir;
    string status;
    string jabatan;
    string level;
    string divisi;
    double gaji;
    int masaKerja;
    char jenisKelamin;
};

const int max_karyawan = 2;
Karyawan dataKaryawan[max_karyawan];
int jumlahKaryawan = 0;
