#include <iostream>
#include "canvas.h"
#include "cisim.h"
#include "etkilesim.h"
#include "roket.h"
#include "vektor.h"
/*
// roket sinifi kontrol
int main() {

    roket roket(500, 100, 3000, 100, vektor(0.0, 0.0), vektor(0.0, 0.0));

    roket.kuvvetEkleme(vektor(0.0, -10 * 500));

    for (int i = 0; i < 10; ++i) {
        roket.guncelleme();
        roket.print();
    }

// terminal:
// Kutle + Kalan Yakit Kutlesi: 599, Konum: (0.0500835, -0.000834725)
// Hiz: (5.00835, -0.0834725)
// Kalan Yakit Miktari:99

// Kutle + Kalan Yakit Kutlesi: 598, Konum: (0.150334, -0.00166945)
// Hiz: (10.0251, -0.0834725)
// Kalan Yakit Miktari:98

// Kutle + Kalan Yakit Kutlesi: 597, Konum: (0.300836, -0.00250417)
// Hiz: (15.0502, -0.0834725)
// Kalan Yakit Miktari:97

// Kutle + Kalan Yakit Kutlesi: 596, Konum: (0.501674, -0.0033389)
// Hiz: (20.0838, -0.0834725)
// Kalan Yakit Miktari:96

// Kutle + Kalan Yakit Kutlesi: 595, Konum: (0.752931, -0.00417362)
// Hiz: (25.1258, -0.0834725)
// Kalan Yakit Miktari:95

// Kutle + Kalan Yakit Kutlesi: 594, Konum: (1.05469, -0.00500835)
// Hiz: (30.1763, -0.0834725)
// Kalan Yakit Miktari:94

// Kutle + Kalan Yakit Kutlesi: 593, Konum: (1.40705, -0.00584307)
// Hiz: (35.2353, -0.0834725)
// Kalan Yakit Miktari:93

// Kutle + Kalan Yakit Kutlesi: 592, Konum: (1.81008, -0.0066778)
// Hiz: (40.3029, -0.0834725)
// Kalan Yakit Miktari:92

// Kutle + Kalan Yakit Kutlesi: 591, Konum: (2.26387, -0.00751252)
// Hiz: (45.379, -0.0834725)
// Kalan Yakit Miktari:91

// Kutle + Kalan Yakit Kutlesi: 590, Konum: (2.7685, -0.00834725)
// Hiz: (50.4638, -0.0834725)
// Kalan Yakit Miktari:90
    return 0;
}
*/