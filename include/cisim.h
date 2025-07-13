#ifndef CISIM_H
#define CISIM_H

#include <cmath>
#include "vektor.h"

class cisim{
public:
    // constructor
    cisim(double kutle, const vektor& konum , const vektor& hiz);
    
    // sanal destructor
    virtual ~cisim() {}

    // ozel uyelere erisebilmek icin
    double getKutle() const;
    vektor getKonum() const;
    vektor getHiz() const;

    // kuvvet eklemek icin fonk.
    void kuvvetEkleme(const vektor& kuvvet);

    // zaman adimi icin sabit kucuk degerli deltaT
    static constexpr double deltaT = 0.01;

    // hiz, ivme, konum, kuvvet icin guncellemeler; sanal
    virtual void guncelleme();

    // yazdirmak icin
    virtual void print() const;

protected:
    double kutle;
    vektor konum;
    vektor hiz;
    vektor netKuvvet;    
};

#endif