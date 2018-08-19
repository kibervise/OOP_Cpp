#include "Hardware_Support.cpp"
#include "Processor.cpp"
#include "RAM.cpp"
#define size 2

int main()
{
    string name_, firmName_;
    double price_, clockFrequency_;
    int amount_;
    
    Hardware_Support **list = new Hardware_Support*[size];
    
    for (int i = 0; i < size; i++)
    {
        switch (i)
        {
            case 0:
            {
                cout << "Input:" << endl << "Processor name: ";
                cin >> name_;
                cout << "Firm name: ";
                cin >> firmName_;
                cout << "Price: ";
                cin >> price_;
                cout << "Clock frequency: ";
                cin >> clockFrequency_;
                list[i] = new Processor(name_, firmName_, price_, clockFrequency_);
                break;
            }
            case 1:
            {
                cout << "Input:" << endl << "RAM's name: ";
                cin >> name_;
                cout << "Firm name: ";
                cin >> firmName_;
                cout << "Price: ";
                cin >> price_;
                cout << "Amount: ";
                cin >> amount_;
                list[i] = new RAM(name_, firmName_, price_, amount_);
                break;
            }
            default:
                break;
        }
    }
    for (int i = 0; i < size; i++)
    {
        list[i]->print();
    }
    for (int i = 0; i < size; i++)
    {
        delete list[i];
    }
    delete[] list;
}

