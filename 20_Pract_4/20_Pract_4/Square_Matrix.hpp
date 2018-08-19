#ifndef Square_Matrix_hpp
#define Square_Matrix_hpp
#include <iostream>
using namespace std;

class Square_Matrix{
private:
    int size;
    int elements;

public:
    int **array;
    Square_Matrix();
    Square_Matrix(int);
    ~Square_Matrix();
    
    void printMatrixElements();
    //void printMatrixDeterminant(int **array);
    
    
    Square_Matrix operator +(const Square_Matrix& a);
    /*
    Square_Matrix operator -(const Square_Matrix& a);
    Square_Matrix operator *(const Square_Matrix& a);
    */
    //Square_Matrix operator *(double number);
    
};

#endif /* Square_Matrix_hpp */
