#include <iostream>

#include "roket.h"
#include "vektor.h"
#include "cisim.h"

// constructor
roket::roket(double kutle, double yakitKG, double Vp, double wp, const vektor& konum, const vektor& hiz)
    : cisim(kutle, konum, hiz), 
      Vp(Vp), wp(wp), yakitKG(yakitKG) {}

// func.s
vektor roket::itmeKuvveti() const {
    if (yakitKG > 0) {
        double itmeKBuyuklugu = Vp * wp;
        return vektor(itmeKBuyuklugu, 0.0); // Kuvvet vektörü
    }
    return vektor(0.0, 0.0); // Yakıt yoksa itme kuvveti sıfır
}


void roket::guncelleme(){
    // itme kuvveti
    vektor itmeK = itmeKuvveti();
    // yakiti azaltma ve kontrol
    yakitKG -= wp * deltaT; 
    if (yakitKG < 0) 
    { yakitKG = 0; }
    
    // itme kuvvetinin eklenmis hali
    netKuvvet = netKuvvet + itmeK;

    // kalan yakit kutlesinin eklenmis hali 
    double toplamKutle = kutle + yakitKG;

    vektor ivme = netKuvvet / toplamKutle;

    // v(t+1) = v(t) + a.dt
    hiz = hiz + ivme * deltaT;

    // x(t+1) = x(t) + v.dt
    konum = konum + hiz * deltaT;

    // sifirlama
    netKuvvet = vektor(0.0, 0.0);
}

void roket::print() const{
    std::cout << "Kutle + Kalan Yakit Kutlesi: " << (kutle + yakitKG) 
              << ", Konum: ";
    konum.print();
    std::cout << "Hiz: ";
    hiz.print();
    std::cout << "Kalan Yakit Miktari:" << yakitKG << "\n";
    std::cout << "\n";
}