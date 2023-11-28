#include <iostream>

class PersegiPanjang {
public:
    double panjang;
    double lebar;

public:
    // Setter
    void setPanjang(double p) { panjang = p; }
    void setLebar(double l) { lebar = l; }

    // Getter
    double getPanjang() const { return panjang; }
    double getLebar() const { return lebar; }

    // Menghitung luas dan keliling
    double hitungLuas() const { return panjang * lebar; }
    double hitungKeliling() const { return 2 * (panjang + lebar); }
};

int main() {
    PersegiPanjang persegi;
    
    // Mengatur panjang dan lebar
    persegi.setPanjang(8);
    persegi.setLebar(9);

    // Menampilkan panjang, lebar, luas, dan keliling
    std::cout << "Panjang: " << persegi.getPanjang() << " Lebar: " << persegi.getLebar() << std::endl;
    std::cout << "Luas: " << persegi.hitungLuas() << std::endl;
    std::cout << "Keliling: " << persegi.hitungKeliling() << std::endl;

    return 0;
}
