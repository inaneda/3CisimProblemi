#ifndef CANVAS_H
#define CANVAS_H

/*
 *   TOBB ETU Elektrik ve Elektronik Bölümü
 *   ELE142 Bilgisayar Programlama II
 *   Grafik Çizim Kütüphanesi
 *   o.arik@edu.etu.tr
 */

#include <fstream>
#include <cmath>


#define Width 1000
#define Height 1000
#define leftX 0
#define centerX 500
#define rightX 1000
#define topY 0
#define centerY 500
#define bottomY 1000 

class canvas
{
public:
    canvas(std::string filename, double scaleX=1, double scaleY=1, int offsetX=centerX, int offstY=centerY);
    void openFile(bool newfile=false);
    void closeFile();
    void startDoc();
    void finishDoc();
    void drawFrame();
    void drawPolyline(double px[], double py[], int size, std::string color="black");
    void drawPolygon(double px[], double py[], int size, std::string color="black");
    void drawPoints(double px[], double py[], int size, std::string color="black", double radius=1);
    void drawLine(double px1, double py1, double px2, double py2, std::string color="black");
    void drawRectangle(double px, double py, double width, double height, std::string color="black");
    void drawPoint(double px, double py, std::string color="black", double radius=1);
    void drawArray(double array[], int size, std::string color="black", bool expand=true);
    void drawText(std::string text, double px, double py, std::string color="grey", int fontsize=14);
    double mapX(double x) const;
    double mapY(double y) const;

private:
    std::string filename, title;
    std::ofstream outputFile;
    int offsetX;
    int offsetY;
    double scaleX;
    double scaleY;
};
#endif // CANVAS_H
