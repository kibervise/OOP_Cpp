#include "Exception.hpp"
#include <iostream>
#include <string>
using namespace std;

Exception::Exception(string error_):error(error_){
}

Exception::~Exception(){
}

string Exception::get_error(){
    return error;
}
