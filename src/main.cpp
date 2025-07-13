// #include <iostream>

// #include "canvas.h"
// #include "cisim.h"
// #include "etkilesim.h"
// #include "roket.h"
// #include "vektor.h"

// int main() {
//     std::cout << "Simulasyon basladi.\n";

//     // canvas'ta tanimlanmis               centerX = centerY = 500
//     canvas graphic("3CisimProblemi", 1, 1, centerX, centerY); 
//     graphic.startDoc();
//     graphic.drawFrame();

//     // cisim cisim1(1000, vektor(-200, 0), vektor(0, 2));
//     // cisim cisim2(1500, vektor(200, 0), vektor(0, -2));
//     // cisim cisim3(2000, vektor(0, 300), vektor(-1.5, 0));

//     // etkilesim uzay;
//     // uzay.cisimEkleme(0, &cisim1);
//     // uzay.cisimEkleme(1, &cisim2);
//     // uzay.cisimEkleme(2, &cisim3);
    
//     etkilesim uzay;
//     uzay.cisimEkleme(0, new cisim(1000, vektor(-200, 0), vektor(0, 2)));
//     uzay.cisimEkleme(1, new cisim(1500, vektor(200, 0), vektor(0, -2)));
//     // uzay.cisimEkleme(2, new cisim(2000, vektor(0, 300), vektor(-1.5, 0)));
//     uzay.cisimEkleme(2, new roket(500, 100, 3000, 1, vektor(0, 200), vektor(0.05, -0.05)));

//     // simulasyon uzunlugu
//     const int simUzunlugu = 2000;

//     // her 10 uzunlukta bir cizim yapilsin
//     const int cizimAraligi = 10;

//     // Simülasyonu başlat ve her adımda cisimlerin pozisyonunu çiz
//     for (int t = 0; t < simUzunlugu; ++t) {
//         uzay.guncelleme();

//         if(t % cizimAraligi == 0){
            
//             for(int i=0; i<3; ++i){
//             vektor yer = uzay.getKonum(i);
            
//             if (i == 0) {
//                 graphic.drawPoint(yer.getX(), yer.getY(), "red", 2);
//             } else if (i == 1) {
//                 graphic.drawPoint(yer.getX(), yer.getY(), "green", 2);
//             } else {
//                 graphic.drawPoint(yer.getX(), yer.getY(), "blue", 2);
//             }

//             }
//         }
//     }

//     graphic.finishDoc();
//     return 0;
// }


