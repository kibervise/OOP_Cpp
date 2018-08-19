#include <iostream>
#include "20_Pract_1.hpp"
using namespace std;

Scaner::Scaner(char *n, char *m, int pr, int hsa, int vsa, int grsc){
    name = new char[strlen(n) + 1];
    strcpy(name, n);
    
    maker = new char[strlen(m) + 1];
    strcpy(maker, m);
    
    price = pr;
    horizontal_scan_area = hsa;
    vertical_scan_area = vsa;
    grayscale = grsc;
}

Scaner::~Scaner(){
    delete [] name;
    delete [] maker;
    cout << "\nMemory has been cleaned!\n" <<endl;
}
void Scaner::set_name(char *n)
{
    delete [] name;
    name = new char[strlen(n) + 1];
    strcpy(name, n);
}

void Scaner::set_maker(char *m)
{
    delete [] maker;
    maker = new char[strlen(m) + 1];
    strcpy(maker, m);
}

void Scaner::set_price(int pr) { price = pr; }

void Scaner::set_horizontal_scan_area(int hsa) { horizontal_scan_area = hsa; }

void Scaner::set_vertical_scan_area(int vsa) { vertical_scan_area = vsa; }

void Scaner::set_grayscale(int grsc) { grayscale = grsc; }

void Scaner::ShowScanerInf() const
{
    cout << "Scaners Name: " << get_name() << endl;
    cout << "Maker: " << get_maker() << endl;
    cout << "Price: " << get_price() << "$" << endl;
    cout << "Horizontal scan area: " << get_horizontal_scan_area() << " dpi" << endl;
    cout << "Verticalal scan area: " << get_vertical_scan_area() << " dpi" << endl;
    cout << "Grayscale: " << get_grayscale() << endl;
}

