#include <iostream>
#include <string>

class RekeningBank {
public:
    std::string nama;
    std::string nomorRekening;
    double saldo;

public:
    // Konstruktor untuk inisialisasi data awal
    RekeningBank(const std::string& _nama, const std::string& _nomorRekening, double _saldo)
        : nama(_nama), nomorRekening(_nomorRekening), saldo(_saldo) {}

    // Method untuk menambah saldo
    void tambahSaldo(double jumlah) {
        saldo += jumlah;
        std::cout << "Saldo berhasil ditambah. Saldo sekarang: " << saldo << std::endl;
    }

    // Method untuk mengurangi saldo
    void tarikSaldo(double jumlah) {
        if (jumlah <= saldo) {
            saldo -= jumlah;
            std::cout << "Penarikan berhasil. Saldo sekarang: " << saldo << std::endl;
        } else {
            std::cout << "Saldo tidak mencukupi untuk penarikan." << std::endl;
        }
    }

    // Method untuk menampilkan informasi rekening
    void tampilkanInfo() const {
        std::cout << "Nama: " << nama << std::endl;
        std::cout << "Nomor Rekening: " << nomorRekening << std::endl;
        std::cout << "Saldo: " << saldo << std::endl;
    }
};

int main() {
    // Membuat objek RekeningBank
    RekeningBank rekening("Vilanda Harsono", "1234567890", 1000.0);

    // Menampilkan informasi awal rekening
    std::cout << "Informasi Awal Rekening:" << std::endl;
    rekening.tampilkanInfo();

    // Menambah saldo
    rekening.tambahSaldo(500.0);

    // Mengurangi saldo
    rekening.tarikSaldo(200.0);

    // Menampilkan informasi setelah perubahan
    std::cout << "\nInformasi Setelah Perubahan:" << std::endl;
    rekening.tampilkanInfo();

    return 0;
}
