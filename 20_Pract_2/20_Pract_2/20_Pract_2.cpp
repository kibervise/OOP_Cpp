#include "20_Pract_2.hpp"
#include "Ar_Scan.hpp"
#include <iostream>
#include <string>

using namespace std;

Scaner::Scaner(): name(""), maker(""), price(0), horizontal_scan_area(0), vertical_scan_area(0), grayscale(0){
}

Scaner::Scaner(string n, string m, int pr, int hsa, int vsa, int grsc):name(n), maker(m), price(pr), horizontal_scan_area(hsa), vertical_scan_area(vsa), grayscale(grsc){
}

Scaner::~Scaner() //destructor
{
    cout << "\nMemory has been cleaned!\n" <<endl;
}

