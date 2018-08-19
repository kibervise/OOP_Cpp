#ifndef RAM_hpp
#define RAM_hpp
#include "Hardware_Support.hpp"
#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

class RAM : public Hardware_Support
{
private:
    int amount;
public:
    RAM();
    RAM(string name_, string firmName_, double price_, int amount_);
    ~RAM();

    void setAmount(int amount_);
    void print() const;
};
#endif /* RAM_hpp */
