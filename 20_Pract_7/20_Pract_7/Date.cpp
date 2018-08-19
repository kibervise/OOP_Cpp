#include "Date.hpp"
#include "Exception.hpp"
#include <iostream>
#include <string>
using namespace std;

string Date::MonthNames[12] = { "January", "February", "March",
    "April", "May", "June", "July", "August", "September",
    "October", "November", "December" };

void Date::set_enterNumberOfmonth(int enterNumberOfmonth_)
{
    if( enterNumberOfmonth_ < 1  || enterNumberOfmonth_ > 12 )
        throw Exception("Error!!! Enter the bad number! " );

        enterNumberOfMonth = enterNumberOfmonth_;
    
}

Date::Date(int enterNumberOfmonth_)
{
    set_enterNumberOfmonth(enterNumberOfmonth_);
}

int Date::get_enterNumberOfmonth()
{
    return enterNumberOfMonth;
}

Date::~Date(){
    
}

string Date::showMonth() {
    return MonthNames[enterNumberOfMonth -1];
}

