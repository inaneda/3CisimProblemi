#ifndef ROKET_H
#define ROKET_H

#include "vektor.h"
#include "cisim.h"

class roket : public cisim{
public:
    // constructor hem cisim hem roket uyeleri icin
    roket(double kutle, double yakitKG, double Vp, double wp, const vektor& konum, const vektor& hiz);
    
    // yakit kontrolu, yakit kutlesi, toplam kutle, 
    // ivme, hiz, konum, net kuvvet guncellemeleri
    void guncelleme(); // override
    vektor itmeKuvveti() const;

    // yazdirma
    void print() const; // override

private:
    double Vp; // puskurtme hizi
    double wp; // birim zamanda puskurtulen gazin kutlesi
    double yakitKG; // roketteki yakit miktari  
};

#endif