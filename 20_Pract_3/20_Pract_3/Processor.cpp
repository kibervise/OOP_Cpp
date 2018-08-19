#include "Processor.hpp"
#include <iostream>
#include <string>
using namespace std;

Processor::Processor(): clockFrequency(0){
    
}

Processor::Processor(string name_, string firmName_, double price_, double clockFrequency_): Hardware_Support(name_, firmName_, price_), clockFrequency(clockFrequency_)
{
}

Processor::~Processor()
{
}

void Processor::setClockFrequency(double clockFrequency_){
    clockFrequency = clockFrequency_;
}

void Processor::print() const
{
    cout << "----Processor----" << endl;
    Hardware_Support::print();
    cout << "Clock frequency: " << clockFrequency << endl;
}
