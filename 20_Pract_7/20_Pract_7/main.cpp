#include "Date.cpp"
#include "Exception.cpp"
#include <iostream>
#include <string>
using namespace std;


int main() {
    int enterNumberOfMonth;
    cout << "Enter number of month: ";
    cin >> enterNumberOfMonth;
    try {
        Date date( enterNumberOfMonth);
         cout << enterNumberOfMonth << " month is " << date.showMonth() << endl;
    }
    catch (Exception &exception) {
        cout << exception.get_error() << endl;
    }
}
