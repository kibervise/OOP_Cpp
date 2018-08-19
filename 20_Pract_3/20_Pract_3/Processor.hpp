#ifndef Processor_hpp
#define Processor_hpp
#include "Hardware_Support.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class Processor : public Hardware_Support
{
private:
    double clockFrequency;
public:
    Processor();
    Processor(string name_, string firmName_, double price_, double clockFrequency_);
    ~Processor();
    void setClockFrequency(double clockFrequency_);
    void print() const;
};
#endif /* Processor_hpp */
