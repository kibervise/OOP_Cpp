#ifndef Hardware_Support_hpp
#define Hardware_Support_hpp
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Hardware_Support
{
protected:
    string name;
    string firmName;
    double price;
public:
    Hardware_Support();
    Hardware_Support(string name_, string firmName_, double price_);
    virtual ~Hardware_Support();
    void setInformation(string name_, string firmName_, double price_);
    virtual void print() const;
};

#endif /* Hardware_Support_hpp */
