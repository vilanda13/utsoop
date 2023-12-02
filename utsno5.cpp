#include <iostream>
#include <string>
using namespace std;
class Mobil {
public:
    string nama;
    string model;
    double kecepatan;

public:
    // Constructor
    Mobil(const string& nama, const string& model, double kecepatan)
        : nama(nama), model(model), kecepatan(kecepatan) {}

    // Property
    void setNama(const string& nama) { this->nama = nama; }
    void setModel(const string& model) { this->model = model; }
    void setKecepatan(double kecepatan) { this->kecepatan = kecepatan; }

    string getNama() const { return nama; }
    string getModel() const { return model; }
    double getKecepatan() const { return kecepatan; }

    // Method
    void percepat(double tambahanKecepatan) {
        kecepatan += tambahanKecepatan;
        cout << nama << " dipercepat menjadi " << kecepatan << " km/h." << endl;
    }

    void perlambat(double penguranganKecepatan) {
        kecepatan -= penguranganKecepatan;
        if (kecepatan < 0) {
            kecepatan = 0;
        }
        cout << nama << " diperlambat menjadi " << kecepatan << " km/h." << endl;
    }

    void tampilkanInformasi() const {
        cout << "\nInformasi Mobil:" << endl;
        cout << "Nama: " << getNama() << endl;
        cout << "Model: " << getModel() << endl;
        cout << "Kecepatan: " << getKecepatan() << " km/h" << std::endl;
    }
};

int main() {
    // Membuat objek Mobil
    Mobil mobil("Mobil Offroad", "Kawasaki 4 Silinder", 120.0);

    // Menampilkan informasi awal
    mobil.tampilkanInformasi();

    // Mempercepat dan menampilkan informasi setelahnya
    mobil.percepat(50.0);

    // Memperlambat dan menampilkan informasi setelahnya
    mobil.perlambat(30.0);

    return 0;
}
