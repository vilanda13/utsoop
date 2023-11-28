#include <iostream>
#include <cmath>

class Tabung {
public:
    double jariJari;
    double tinggi;

public:
    // Setter
    void setJariJari(double r = 0.0 ) { jariJari = r; }
    void setTinggi(double h = 0.0 ) { tinggi = h; }

    // Getter
    double getJariJari() const { return jariJari; }
    double getTinggi() const { return tinggi; }

    // Method untuk menghitung volume tabung
    double hitungVolume() const {
        return M_PI * pow(jariJari, 2) * tinggi;
    }

    // Method untuk menghitung luas permukaan tabung
    double hitungLuasPermukaan() const {
        return 2 * M_PI * jariJari * (jariJari + tinggi);
    }
};

int main() {
    Tabung tabung;

    // Mengatur jari-jari dan tinggi tabung
    tabung.setJariJari(10.0);
    tabung.setTinggi(7.0);

    // Menampilkan jari-jari, tinggi, volume, dan luas permukaan tabung
    std::cout << "Jari-jari: " << tabung.getJariJari() << std::endl;
    std::cout << "Tinggi: " << tabung.getTinggi() << std::endl;
    std::cout << "Volume: " << tabung.hitungVolume() << std::endl;
    std::cout << "Luas Permukaan: " << tabung.hitungLuasPermukaan() << std::endl;

    return 0;
}
