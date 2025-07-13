#include <iostream>
#include <cmath>
#include <algorithm>

#include "canvas.h"
#include "cisim.h"
#include "etkilesim.h"
#include "roket.h"
#include "vektor.h"

// mesafe hesabi icin fonk.
double mesafe(const vektor& p1, const vektor& p2) {
    // d = sqrt((x2 - x1)^2 + (y2 - y1)^2)
    return std::sqrt(std::pow(p2.getX() - p1.getX(), 2) + std::pow(p2.getY() - p1.getY(), 2));
}

// hangi konfig.
std::string konfigBelirle(const vektor& p1, const vektor& p2, const vektor& p3) {
    double d1 = mesafe(p1, p2); // Kenar uzunluğu d1
    double d2 = mesafe(p2, p3); // Kenar uzunluğu d2
    double d3 = mesafe(p3, p1); // Kenar uzunluğu d3

    double kenarlar[] = {d1, d2, d3};
    std::sort(kenarlar, kenarlar + 3);

    // 3-4-5 ucgeni kontrolu -> Barrau
    // kenar uzunluklari orani: d1/d2 = 3/4 ve d2/d3 = 4/5
    if (std::abs(kenarlar[0] / kenarlar[1] - 3.0 / 4.0) < 1e-5
    && std::abs(kenarlar[1] / kenarlar[2] - 4.0 / 5.0) < 1e-5){
        return "Barrau konfigurasyonu ile uyumlu.";
    }

    // dogrsallik kontrol -> Euler
    // (y2-y1)/(x2-x1) = (y3-y2)/(x3-x2)
    if (std::abs((p2.getY() - p1.getY()) * (p3.getX() - p2.getX()) -
                 (p3.getY() - p2.getY()) * (p2.getX() - p1.getX())) < 1e-6) {
        return "Euler konfigurasyonu ile uyumlu.";
    }

    return "uygun bir konfigurasyon bulunamadi.";
}

int main() {
    canvas graphic("ekOzellikli3CisimProblemi");
    graphic.startDoc();
    graphic.drawFrame();

    // kullanicidan giriş almak icin
    double mass1, mass2, mass3;
    double x1, y1, vx1, vy1;
    double x2, y2, vx2, vy2;
    double x3, y3, vx3, vy3;

    std::cout << "Birinci cisim icin (kutle, konum_x, konum_y, hiz_vx, hiz_vy): ";
    std::cin >> mass1 >> x1 >> y1 >> vx1 >> vy1;

    std::cout << "Ikinci cisim icin (kutle, konum_x, konum_y, hiz_vx, hiz_vy): ";
    std::cin >> mass2 >> x2 >> y2 >> vx2 >> vy2;

    std::cout << "Ucuncu cisim icin (kutle, konum_x, konum_y, hiz_vx, hiz_vy): ";
    std::cin >> mass3 >> x3 >> y3 >> vx3 >> vy3;

    etkilesim uzay;
    uzay.cisimEkleme(0, new cisim(mass1, vektor(x1, y1), vektor(vx1, vy1)));
    uzay.cisimEkleme(1, new cisim(mass2, vektor(x2, y2), vektor(vx2, vy2)));
    uzay.cisimEkleme(2, new cisim(mass3, vektor(x3, y3), vektor(vx3, vy3)));

    // konfig var mi kontrol
    std::string konfig = konfigBelirle(uzay.getKonum(0), uzay.getKonum(1), uzay.getKonum(2));
    std::cout << "Sectiginiz degerler " << konfig << "\n";


    // simulasyon uzunlugu
    const int simUzunlugu = 10000;

    // her 10 uzunlukta bir cizim yapilsin
    const int cizimAraligi = 10;

    // Simülasyonu başlat ve her adımda cisimlerin pozisyonunu çiz
    for (int t = 0; t < simUzunlugu; ++t) {
        uzay.guncelleme();

        if(t % cizimAraligi == 0){
            
            for(int i=0; i<3; ++i){
            vektor yer = uzay.getKonum(i);
            
            if (i == 0) {
                graphic.drawPoint(yer.getX(), yer.getY(), "red", 2);
            } else if (i == 1) {
                graphic.drawPoint(yer.getX(), yer.getY(), "green", 2);
            } else {
                graphic.drawPoint(yer.getX(), yer.getY(), "blue", 2);
            }

            }
        }
    }

    graphic.finishDoc();
    return 0;
}
