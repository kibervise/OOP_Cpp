#include "RAM.hpp"
#include<iostream>
#include <string>
using namespace std;

RAM::RAM():amount(0){
    
}

RAM::RAM(string name_, string firmName_, double price_, int amount_):Hardware_Support(name_, firmName_, price_), amount(amount_)
{

}
RAM::~RAM(){
    
}

void RAM::setAmount(int amount_){
    amount = amount_;
}

void RAM::print() const
{
    cout << "----RAM---" << endl;
    Hardware_Support::print();
    cout << "Amount: " << amount << endl;
}
