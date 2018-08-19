#ifndef _0_Pract_2_hpp
#define _0_Pract_2_hpp
#include <iostream>
#include <string>
using namespace std;

class Scaner
{
private:
    string name;
    string maker;
    int price;
    int horizontal_scan_area;
    int vertical_scan_area;
    int grayscale;
public:
    Scaner();
    Scaner(string n, string m, int pr, int hsa, int vsa, int grsc);
    ~Scaner();
    
    void set_name(string n) { this->name = n; }
    void set_maker(string m) { this->maker = m;}
    void set_price(int pr) { this->price = pr; }
    void set_horizontal_scan_area(int hsa) { this->horizontal_scan_area = hsa; }
    void set_vertical_scan_area(int vsa) { this->vertical_scan_area = vsa; }
    void set_grayscale(int grsc) { this->grayscale = grsc;}
    
    string get_name() const{ return this->name; }
    string get_maker() const { return this->maker; }
    int get_price() const { return this->price; }
    int get_horizontal_scan_area() const { return this->horizontal_scan_area; }

    int get_vertical_scan_area() const { return this->vertical_scan_area; }
    int get_grayscale() const { return this->grayscale; }
};

#endif /* _0_Pract_2_hpp */


