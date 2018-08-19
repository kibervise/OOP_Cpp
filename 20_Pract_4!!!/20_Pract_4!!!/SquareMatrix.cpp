#include "SquareMatrix.hpp"
#include <iostream>
using namespace std;

SquareMatrix::SquareMatrix():rows(0), columns(0), elements(NULL){
}

SquareMatrix::SquareMatrix(int rows_, int columns_,int **elements_):
rows(rows_), columns(columns_)
{
    elements = NULL;
    rows = 0;
    columns = 0;
    set_Matrix(rows_, columns_, elements_);
}

SquareMatrix::~SquareMatrix(){
    for (int i = 0; i < rows; i++)
        delete[] elements[i];
    delete[] elements;
}

void SquareMatrix::set_Matrix(int rows_, int columns_, int **elements_){
    for (int i = 0; i < rows; i++)
        delete[] elements[i];
    delete[] elements;
    rows = rows_;
    columns = columns_;
    elements = new int*[rows];
    for (int i = 0; i < rows; i++)
        elements[i] = new int[columns];
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            elements[i][j] = (elements_ ? elements_[i][j] : 0);
    
}

int SquareMatrix::getRows() const { return rows; }
int SquareMatrix::getColumns() const { return columns; }

bool SquareMatrix::empty() const{
    bool tmp = true;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            if (elements[i][j] != 0)
                tmp = false;
    return tmp;

}

SquareMatrix SquareMatrix::operator+(const SquareMatrix &m){
    
    SquareMatrix temp(rows,columns);
    if (rows == m.rows && columns == m.columns)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
                temp.elements[i][j] = m.elements[i][j]+elements[i][j];
    }

    return temp;
}

SquareMatrix SquareMatrix::operator-(const SquareMatrix &m){
   
    SquareMatrix temp(rows,columns);
    if (rows == m.rows && columns == m.columns)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
                temp.elements[i][j] = elements[i][j]-m.elements[i][j];
    }
    return temp;
}

SquareMatrix SquareMatrix::operator*(const SquareMatrix &m){
    SquareMatrix temp(rows,columns);
    if (rows == m.rows && columns == m.columns)
    {
        for (int i = 0; i < rows; i++)
            for (int j = 0; j < columns; j++)
                temp.elements[i][j] = elements[i][j] * m.elements[i][j];
    }
    return temp;
}

SquareMatrix SquareMatrix::operator*(const int number){
    SquareMatrix temp(rows,columns);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
            temp.elements[i][j] = elements[i][j]*number;
    return temp;
}

ostream & operator << ( ostream & os, SquareMatrix & M ){

    for(int i = 0; i < M.rows; i++){
        for (int j = 0; j < M.columns; j++){
            os << M.elements[i][j] << " ";
        }
        os << endl;
    }
    return os;
}

void SquareMatrix::printMatrixDeterminant() const {
    
    double determinant = 0;
    if(rows == columns){
        if(rows == 1)
        {
            determinant = elements[0][0];
        }
        else if(rows == 2)
        {
            determinant = elements[0][0]*elements[1][1]-elements[0][1]*elements[1][0];
        }
        else
        {
            cout << "more" << endl;
        }
    }
    cout << "det: " << determinant << endl;
}
