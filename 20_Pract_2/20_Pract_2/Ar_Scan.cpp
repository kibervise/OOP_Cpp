#include "Ar_Scan.hpp" 
#include <string>
using namespace std;


Array_Scaner::Array_Scaner()
{
    sc[0] = new Scaner("Epson Perfection V850 Pro", "Epson", 999, 6400, 9600, 256);
    sc[1] = new Scaner("Epson Perfection V37", "Epson", 900, 4600, 12800, 256);
    sc[2] = new Scaner("Cannon VSX Pro 5", "Cannon", 865, 6400, 9600, 256);
    sc[3] = new Scaner("Kodak i940", "Kodak", 1020, 4600, 12800, 512);
    sc[4] = new Scaner("Kodak ScanMate i1150", "Kodak", 789, 6400, 9600, 512);
}

Array_Scaner::~Array_Scaner()
{
    cout << "Array Scaner memory has benn cleaned! \n";
    for(int i =0; i < size; i++){
        delete [] sc[size];
    }
}

void Array_Scaner::ShowAll() const{
    cout << "\t\tAll information" << endl << endl;
    for(int i = 0; i < size; i++)
    {
        cout << "-Scaners Name: " << sc[i]->get_name() << endl;
        cout << "-Scaners maker: " << sc[i]->get_maker() << endl;
        cout << "-Price: " << sc[i]->get_price() << "$" << endl;
        cout << "-Horizontal scan area: " << sc[i]->get_horizontal_scan_area() << " dpi" << endl;
        cout << "-Verticalal scan area: " << sc[i]->get_vertical_scan_area() << " dpi" << endl;
        cout << "-Grayscale: " << sc[i]->get_grayscale() << "\n\n" << endl;
    }
}

void Array_Scaner::ShowScanerName(string maker_sc) const
{
    for(int i = 0; i < size; i++)
    {
        if(sc[i]->get_maker() == maker_sc)
        {
            cout << "-Scaners Name: " << sc[i]->get_name() << endl;
            cout << "-Price: " << sc[i]->get_price() << "$" << endl;
            cout << "-Horizontal scan area: " << sc[i]->get_horizontal_scan_area() << " dpi" << endl;
            cout << "-Verticalal scan area: " << sc[i]->get_vertical_scan_area() << " dpi" << endl;
            cout << "-Grayscale: " << sc[i]->get_grayscale() << "\n\n" << endl;
        }
    }
}

void Array_Scaner::ShowScanArea(int hsa_sc, int vsa_sc) const
{
    

    
    for(int i = 0; i < size; i++)
        if(sc[i]->get_horizontal_scan_area() == hsa_sc && sc[i]->get_vertical_scan_area() == vsa_sc)
        {
            cout << "-Scaners Name: " << sc[i]->get_name() << endl;
            cout << "-Horizontal scan area: " << sc[i]->get_horizontal_scan_area() << " dpi" << endl;
            cout << "-Verticalal scan area: " << sc[i]->get_vertical_scan_area() << " dpi" << endl << endl;
        }
}

void Array_Scaner::ShowScanerPerPrice(int price_sc) const
{
    double price_per_sc = price_sc * 0.05;
    
    for(int i = 0; i < size; i++)
    {
        if((sc[i]->get_price() <= (price_sc + price_per_sc)) && (sc[i]->get_price() >= (price_sc - price_per_sc)))
        {
            cout << "- Scaners Name: " << sc[i]->get_name() << endl << endl;
            cout << "-Price: " << sc[i]->get_price() << "$" << endl;
        }
    }
}
