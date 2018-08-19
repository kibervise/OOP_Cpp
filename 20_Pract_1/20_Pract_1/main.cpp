#include <iostream>
#include "20_Pract_1.hpp"
#include "20_Pract_1.cpp"
using namespace std;
#define size 36


int main()
{
    Scaner equipment("Epson Perfection V850 Pro", "Epson", 999, 6400, 9600, 256);
    equipment.ShowScanerInf();
    
    cout << "\n--Another scaner type--\n" << endl;
    equipment.set_name("Epson Perfection V37");
    equipment.set_price(136);
    equipment.set_horizontal_scan_area(4600);
    equipment.set_grayscale(12800);
    equipment.ShowScanerInf();
    
    cout << "\n--Press 0-for enter your scaner information! If not, enter another one--\n" << endl;
    cout << "\tYour choice: ";
    int E;
    cin >> E;
    
    if (E == 0)
    {
        
        int en_price;
        int en_horizontal_scan_area;
        int en_vertical_scan_area;
        int en_grayscale;
        
        char en_name[size];
        char en_maker[size];
        
        cout << "\tEnter scaners name: ";
        cin >> en_name;
        cout << "\tEnter maker: ";
        cin >> en_maker;
        cout << "\tEnter price: ";
        cin >> en_price;
        cout << "\tEnter horizontal scan area: ";
        cin >> en_horizontal_scan_area;
        cout << "\tEnter verticalal scan area: ";
        cin >> en_vertical_scan_area;
        cout << "\tEnter grayscale: ";
        cin >> en_grayscale;
        
        cout << "\n--Another scaner type--" << endl;
        
        equipment.set_name(en_name);
        equipment.set_maker(en_maker);
        equipment.set_price(en_price);
        equipment.set_horizontal_scan_area(en_horizontal_scan_area);
        equipment.set_vertical_scan_area(en_vertical_scan_area);
        equipment.set_grayscale(en_grayscale);
        cout << endl;
        equipment.ShowScanerInf();
        
        cout << "\nEnter memory has been cleaned!" <<endl;
        
    }
}

