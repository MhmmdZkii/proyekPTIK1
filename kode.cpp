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

void tampilkanDataKaryawan() {
    cout << "							\n"; 
    cout << "===== Data Karyawan =====\n";
    for (int i = 0; i < jumlahKaryawan; ++i) {
        cout << "Nama: " << dataKaryawan[i].nama << endl;
        cout << "NIK: " << dataKaryawan[i].nik << endl;
        cout << "Tanggal Lahir: " << dataKaryawan[i].tanggalLahir << endl;
        cout << "Status: " << dataKaryawan[i].status << endl;
        cout << "Jabatan: " << dataKaryawan[i].jabatan << endl;
        cout << "Level: " << dataKaryawan[i].level << endl;
        cout << "Divisi: " << dataKaryawan[i].divisi << endl;
        cout << "Gaji: " << dataKaryawan[i].gaji << endl;
        cout << "Masa Kerja: " << dataKaryawan[i].masaKerja << " tahun\n";
        cout << "Jenis Kelamin: " << (dataKaryawan[i].jenisKelamin == 'L' ? "Laki-laki" : "Perempuan") << endl;
        cout << "------------------------\n";
    }
}

