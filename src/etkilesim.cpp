#include <iostream>
#include "etkilesim.h"
#include "roket.h"
#include "vektor.h"
#include "cisim.h"

const double G = 1.0;

etkilesim::etkilesim()
{
    for(int i=0; i<cisimSayisi; i++){
        cisimler[i] = nullptr;
    }
}

etkilesim::~etkilesim(){
    for(int i=0; i<cisimSayisi; i++){
        delete cisimler[i];
    }
}

void etkilesim::cisimEkleme(int indeks, cisim* yeniCisim){
        if (indeks >= 0 && indeks < cisimSayisi) {
        delete cisimler[indeks]; // eski cisim
        cisimler[indeks] = yeniCisim; // yeni cisim ekleme
    } else {
        std::cout << "3 cisim eklendi, daha fazla cisim eklenemez.\n";
    }
}

void etkilesim::guncelleme(){
    // her cisim icin net kuvvet hesaplama
    for (int i = 0; i < cisimSayisi; ++i) {
        for (int j = 0; j < cisimSayisi; ++j) {
            if (i != j) {
                // cisim i'nin cisim j'ye uyguladigi 
                // kutle cekim kuvveti (kck) hesabi 
                vektor kck = cisimler[j]->getKonum() - cisimler[i]->getKonum();
                double uzaklik = kck.vektor_buyuklugu();
                if(uzaklik > 0.000001){ // cakisma onleyici
                    double kuvvetBuyuklugu = G * (cisimler[i]->getKutle() * cisimler[j]->getKutle()) / (uzaklik * uzaklik); // yonsuz
                    vektor kuvvet = kck.normalize() * kuvvetBuyuklugu; // yonlu 
                    cisimler[i]->kuvvetEkleme(kuvvet);
                }
            }
        }
    }
    // roketlerin ek itme kuvveti
    for (int i = 0; i < cisimSayisi; ++i) {
        roket* r = dynamic_cast<roket*>(cisimler[i]); // eger cisim bir roketse
        if (r) {
            vektor itmeKuvveti = r->itmeKuvveti();
            cisimler[i]->kuvvetEkleme(itmeKuvveti);
        }
    }

    // tum cisimlerin guncellenmesi
    for(int i=0; i<cisimSayisi; i++){
        cisimler[i]->guncelleme();
    }
}

vektor etkilesim::getKonum(int indeks) const{
    if (indeks >= 0 && indeks < cisimSayisi && cisimler[indeks]) {
            return cisimler[indeks]->getKonum();
    }else
        return vektor(0.0, 0.0); // hatali indeks icin varsayim
}

void etkilesim::print() const{
    for(int i=0; i<cisimSayisi; ++i){
        cisimler[i]->print();
    }
}