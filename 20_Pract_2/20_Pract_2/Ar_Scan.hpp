#ifndef Ar_Scan_hpp
#define Ar_Scan_hpp
#include "20_Pract_2.hpp"
#include <stdio.h>
#include <string>
#define size 5

using namespace std;

class Array_Scaner
{
public:
    Array_Scaner();
    ~Array_Scaner();
    
    void ShowScanerName(string maker_sc) const;
    void ShowScanArea(int hsa_sc, int vsa_sc) const;
    void ShowScanerPerPrice(int price_sc) const;
    void ShowAll() const;
    Scaner *sc[size];
};

#endif /* Ar_Scan_hpp */
