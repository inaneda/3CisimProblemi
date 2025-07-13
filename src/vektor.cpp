#include <iostream>
#include "vektor.h"
// constructors
vektor::vektor() 
    : x(0.0), y(0.0) {}

vektor::vektor(double xValue = 0.0, double yValue = 0.0) 
    : x(xValue), y(yValue) {}

// get
double vektor::getX() const
    { return x; }
double vektor::getY() const
    { return y; }

// set
void vektor::setX(double xValue)
    { this->x = xValue; }
void vektor::setY(double yValue)
    { this->y = yValue; }

// operators
vektor vektor::operator+(const vektor& toplanacak) const
    { return vektor(x + toplanacak.x, y + toplanacak.y); }

vektor vektor::operator-(const vektor& cikarilacak) const
    { return vektor(x - cikarilacak.x, y - cikarilacak.y); }

vektor vektor::operator*(double skalarSayi) const
    { return vektor(x * skalarSayi, y * skalarSayi); }

vektor vektor::operator/(double skalarSayi) const
    { return vektor(x / skalarSayi, y / skalarSayi); }

// func.s
double vektor::vektor_buyuklugu() const
    { return std::sqrt(x * x + y * y); }

vektor vektor::normalize() const{
    double buyukluk = vektor_buyuklugu(); 
    if (buyukluk > 0) {
        return vektor(x / buyukluk, y / buyukluk);
    } else {
        return vektor(0.0, 0.0);
    }
    }

double vektor::dot(const vektor& digeri) const
    { return x * digeri.x + y * digeri.y; }

void vektor::print() const
    {  std::cout << "(" << x << ", " << y << ")\n"; }