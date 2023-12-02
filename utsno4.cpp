#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class Mahasiswa {
public:
    string nama;
    string nomorInduk;
    vector<string> mataKuliah;
    vector<double> nilai;

public:
    // Constructor
    Mahasiswa(const string& nama, const string& nomorInduk) 
        : nama(nama), nomorInduk(nomorInduk) {}

    // Property
    void setNama(const string& nama) { this->nama = nama; }
    void setNomorInduk(const string& nomorInduk) { this->nomorInduk = nomorInduk; }

    string getNama() const { return nama; }
    string getNomorInduk() const { return nomorInduk; }

    // Method
    void tambahMataKuliah(const string& matkul) {
        mataKuliah.push_back(matkul);
        nilai.push_back(0.0); // Nilai awal diatur 0
        cout << "Mata kuliah berhasil ditambahkan." << endl;
    }

    void hapusMataKuliah(const string& matkul) {
        auto itMatkul = find(mataKuliah.begin(), mataKuliah.end(), matkul);
        if (itMatkul != mataKuliah.end()) {
            auto index = distance(mataKuliah.begin(), itMatkul);
            mataKuliah.erase(itMatkul);
            nilai.erase(nilai.begin() + index);
            cout << "Mata kuliah berhasil dihapus." << endl;
        } else {
            cout << "Mata kuliah tidak ditemukan." << endl;
        }
    }

    void inputNilai(const string& matkul, double nilai) {
        auto itMatkul = find(mataKuliah.begin(), mataKuliah.end(), matkul);
        if (itMatkul != mataKuliah.end()) {
            auto index = distance(mataKuliah.begin(), itMatkul);
            this->nilai[index] = nilai;
            cout << "Nilai untuk mata kuliah " << matkul << " berhasil diinput." << endl;
        } else {
            cout << "Mata kuliah tidak ditemukan." << endl;
        }
    }

    double hitungRataRata() const {
        if (nilai.empty()) {
            return 0.0;
        } else {
            double totalNilai = 0.0;
            for (double n : nilai) {
                totalNilai += n;
            }
            return totalNilai / nilai.size();
        }
    }

    // Method untuk menampilkan catatan akademik
    void tampilkanCatatanAkademik() const {
        cout << "\nCatatan Akademik Mahasiswa:" << endl;
        cout << "Nama: " << getNama() << endl;
        cout << "Nomor Induk: " << getNomorInduk() << endl;

        if (mataKuliah.empty()) {
            cout << "Mata Kuliah: (Belum ada mata kuliah)" << endl;
        } else {
            cout << "Mata Kuliah:" << endl;
            for (size_t i = 0; i < mataKuliah.size(); ++i) {
                cout << "- " << mataKuliah[i] << ": " << nilai[i] << endl;
            }
            cout << "Rata-rata Nilai: " << hitungRataRata() << endl;
        }
    }
};

int main() {
    // Membuat objek Mahasiswa
    Mahasiswa mahasiswa("Vilanda Harsono", "202211022");

    // Menampilkan catatan akademik awal
    mahasiswa.tampilkanCatatanAkademik();

    // Menambahkan mata kuliah dan menampilkan catatan akademik setelahnya
    mahasiswa.tambahMataKuliah("Desain Grafis");
    mahasiswa.tambahMataKuliah("Basis Data");
    mahasiswa.tambahMataKuliah("Matematika Diskrit");
    mahasiswa.tampilkanCatatanAkademik();

    // Input nilai untuk mata kuliah tertentu dan menampilkan catatan akademik setelahnya
    mahasiswa.inputNilai("Desain Grafis", 80.0);
    mahasiswa.inputNilai("Basis Data", 95.0);
    mahasiswa.inputNilai("Matematika Diskrit", 80.0);
    mahasiswa.tampilkanCatatanAkademik();

    // Menghapus mata kuliah dan menampilkan catatan akademik setelahnya
    mahasiswa.hapusMataKuliah("Desain Grafis");
    mahasiswa.tampilkanCatatanAkademik();

    return 0;
}
