#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    string tempat_lahir;
    string tanggal_lahir;
    string alamat;
};

int main() {
    Mahasiswa mhs;
    mhs.nim = "531410001";
    mhs.nama = "Susana";
    mhs.tempat_lahir = "Gorontalo";
    mhs.tanggal_lahir = "17-01-1981";
    mhs.alamat = "Jl. Sudirman No.6, Kota Gorontalo";

    cout << "NIM           : " << mhs.nim << endl;
    cout << "Nama          : " << mhs.nama << endl;
    cout << "Tempat Lahir  : " << mhs.tempat_lahir << endl;
    cout << "Tanggal Lahir : " << mhs.tanggal_lahir << endl;
    cout << "Alamat        : " << mhs.alamat << endl;

    return 0;
}
