#ifndef VEKTOR_H
#define VEKTOR_H

#include <cmath>

class vektor{
public:
    // constructors
    vektor(double,double);
    vektor();
    
    // ozel uyelere erisim icin get fonk.lari
    double getX() const;
    double getY() const;
    
    // ozel uyelere deger atabilmek icin set fonk.lari
    void setX(double);
    void setY(double);

    // vektorlerin toplanma operatoru
    vektor operator+(const vektor& diger) const;

    // vektorlerin cikarilma operatoru
    vektor operator-(const vektor& diger) const;

    // vektorun bir skalarla carpilma operatoru
    vektor operator*(double skalar) const;

    // vektorun bir skalara bolunme operatoru
    vektor operator/(double skalar) const;

    // vektor buyuklugu hesaplama fonk.u
    double vektor_buyuklugu() const; 

    // normalize etmek icin fonk.
    vektor normalize() const;

    // nokta carpimi fonk.u
    double dot(const vektor& other) const;

    // nesneyi yazdirmak icin fonk.
    void print() const;

private:
    double x, y;
};

#endif