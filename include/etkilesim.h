#ifndef ETKILESIM_H
#define ETKILESIM_H

#include <vector>
#include "cisim.h"
#include "roket.h"

class etkilesim {
public:
    // constructor
    etkilesim();
    // destructor
    ~etkilesim();

    // cisim ekleme
    void cisimEkleme(int indeks, cisim* yeniCisim);

    // kuvvet hesaplaari ve cisim guncellemeleri
    void guncelleme();
    
    // konum bilgisi alma
    vektor getKonum(int indeks) const;
    
    // yazdirma
    void print() const; 

private:
    static const int cisimSayisi = 3; // 3 cisim problemi
    cisim* cisimler[cisimSayisi];
};

#endif
