#include "20_Pract_2.cpp"
#include "Ar_Scan.cpp"
#include <iostream>

int main()
{
    Array_Scaner *obj = new Array_Scaner;
    
    obj->ShowAll();
    int num = 0;
    while(num != 4){
        
        cout << "\t         -------------- MENU --------------\n" << endl;
        cout << "\t| 1 |. Show information of the specified scanner model " << endl;
        cout << "\t| 2 |. Show the list of scanners that support certain sizes of the scan area" << endl;
        cout << "\t| 3 |. Show the list of scanners of 5% difference in price" << endl;
        cout << "\t| 4 |. Exit" << endl;
        cout << "\n\tYour choice: ";
        cin >> num;
        
        switch(num)
        {
            case 1:
            {
                cout << "\tEnter model of scaner: ";
                string maker_sc;
                cin >> maker_sc;
                cout << "\n\t----------------------" << endl;
                obj->ShowScanerName(maker_sc);
                break;
            }
            case 2:
            {
                cout << "\tEnter scan area in dpi: 6400x9600 or 4600x12800: ";
                int hsa_sc, vsa_sc;
                cin >> hsa_sc >> vsa_sc;
                cout << "\n\t-------------------------" << endl;
                obj->ShowScanArea(hsa_sc, vsa_sc);
                break;
            }
            case 3:
            {
                cout << "\tEnter price to get 5% difference: ";
                int price_sc;
                cin >> price_sc;
                cout << "\n\t-------------------------" << endl;
                obj->ShowScanerPerPrice(price_sc);
                break;
            }
            case 4:
            {
                cout << "\n\t                       Bye :) " << endl;
                cout << "\n\t         --------------- END --------------\n" << endl;
                break;
            }
        }
    }
    delete obj;
}
