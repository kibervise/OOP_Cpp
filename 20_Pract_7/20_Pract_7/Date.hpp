#ifndef Date_hpp
#define Date_hpp

#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    static string MonthNames[12];
    int enterNumberOfMonth;
public:
    Date(int enterNumberOfmonth_ = 1);
    ~Date();
    
    void set_enterNumberOfmonth(int enterNumberOfmonth_);
    int get_enterNumberOfmonth();
    string showMonth();
};

#endif /* Date_hpp */
