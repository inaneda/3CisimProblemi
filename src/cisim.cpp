#include <iostream>
#include "cisim.h"
#include "vektor.h"

// constructor
cisim::cisim(double kutle, const vektor& konum , const vektor& hiz)
    : kutle(kutle), konum(konum), hiz(hiz), netKuvvet(0.0, 0.0) {}

// get func.
double cisim::getKutle() const
    { return kutle; }

vektor cisim::getKonum() const
    { return konum; }

vektor cisim::getHiz() const
    { return hiz; }

// func.s
void cisim::kuvvetEkleme(const vektor& kuvvet)
    { netKuvvet = netKuvvet + kuvvet; }


void cisim::guncelleme(){
    vektor ivme = netKuvvet / kutle;

    // v(t+1) = v(t) + a.dt
    hiz = hiz + ivme * deltaT;

    // x(t+1) = x(t) + v.dt
    konum = konum + hiz * deltaT;

    // sifirlama
    netKuvvet = vektor(0.0, 0.0);
}

void cisim::print() const{
    std::cout << "Kutle: " << kutle << ", Konum: ";
    konum.print();
    std::cout << "Hiz: ";
    hiz.print();
    std::cout << "\n";
}