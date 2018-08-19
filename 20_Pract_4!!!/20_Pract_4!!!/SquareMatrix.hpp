#ifndef SquareMatrix_hpp
#define SquareMatrix_hpp
#include <iostream>
using namespace std;

class SquareMatrix{
private:
    int rows, columns;
    int **elements;
public:
    SquareMatrix();

   SquareMatrix(int, int, int **elements_= NULL);
    ~SquareMatrix();
    
    int getRows() const;
    int getColumns() const;
    void set_Matrix( int, int, int **elements = NULL);
    void printMatrixDeterminant() const;
    bool empty() const;
    
    SquareMatrix operator+(const SquareMatrix &m);
    SquareMatrix operator-(const SquareMatrix &m);
    SquareMatrix operator*(const SquareMatrix &m);
    SquareMatrix operator*(const int number);
    
    friend  ostream & operator << ( ostream & os, SquareMatrix & M );
};

#endif /* SquareMatrix_hpp */
