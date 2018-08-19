#include "Hardware_Support.hpp"
#include <iostream>
#include <string>
using namespace std;

Hardware_Support::Hardware_Support(): price(0){

}

Hardware_Support::Hardware_Support(string name_, string firmName_, double price_):name(name_), firmName(firmName_),price(price_){
}

Hardware_Support::~Hardware_Support(){
}

void Hardware_Support::setInformation(string name_, string firmName_, double price_){
    name = name_;
    firmName = firmName_;
    price = price_;
}

void Hardware_Support::print() const
{
    cout << "Name: " << name << endl;
    cout << "Firm name: " << firmName << endl;
    cout << "Price: " << price << endl;
}


















