#ifndef _0_Pract_1_hpp
#define _0_Pract_1_hpp
#include <stdio.h>
#include <iostream>
using namespace std;

class Scaner
{
private:
    char *name;
    char *maker;
    int price;
    int horizontal_scan_area;
    int vertical_scan_area;
    int grayscale;
    
public:
    Scaner(){
        name = NULL;
        maker = NULL;
        price = 0;
        horizontal_scan_area = 0;
        vertical_scan_area = 0;
        grayscale = 0;
    }
    
    Scaner(char *n, char *m, int pr, int hsa, int vsa, int grsc); //конструктор
    
    ~Scaner(); //destructor

    void set_name(char *);
    void set_maker(char *);
    void set_price(int );
    void set_horizontal_scan_area(int);
    void set_vertical_scan_area(int);
    void set_grayscale(int);
    
    const char *get_name() const { return name; };
    const char *get_maker() const { return maker; }
    int get_price() const { return price; }
    int get_horizontal_scan_area() const { return horizontal_scan_area; }
    int get_vertical_scan_area() const { return vertical_scan_area; }
    int get_grayscale() const { return grayscale; }
    
    void ShowScanerInf() const;
};

#endif /* _0_Pract_1_hpp */

