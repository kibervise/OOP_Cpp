#include "SquareMatrix.cpp"
#include <iostream>
using namespace std;

int main(){
    
    int rows, columns, rows1, columns1;
    int **elements, **elements1;
   
    cout << "Enter rows №1: ";
    cin >> rows;
    cout << "Enter columns №1: ";
    cin >> columns;
    
    elements = new int*[rows];
    for (int i = 0; i < rows; i++)
        elements[i] = new int[columns];
    
    cout << "Enter your matrix: " << endl;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < columns; j++)
        {
            cout << "Matrix [" << i << "][" << j << "]: ";
            cin >> elements[i][j];
        }
    
    //-----------------------
    
    cout << "Enter rows №2: ";
    cin >> rows1;
    cout << "Enter columns №2: ";
    cin >> columns1;
    
    elements1 = new int*[rows1];
    for (int i = 0; i < rows1; i++)
        elements1[i] = new int[columns1];
    
    cout << "Enter your matrix: " << endl;
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns1; j++)
        {
            cout << "Matrix [" << i << "][" << j << "]: ";
            cin >> elements1[i][j];
        }
    //--------------------
            
    SquareMatrix matrix1(rows, columns, elements);
    SquareMatrix matrix2(rows1, columns1, elements1);

    cout << "Matrix 1: " << endl;
    cout << matrix1 << endl;
    cout << "Matrix 2: " << endl;
    cout << matrix2 << endl;
    SquareMatrix  matrix3 = matrix2 + matrix1;
    cout << "Matrix 3(+): " << endl;
    cout << matrix3 << endl;
    
    SquareMatrix  matrix6 = matrix2 - matrix1;
    cout << "Matrix 6(-): " << endl;
    cout << matrix6 << endl;
    
    SquareMatrix  matrix4 = matrix2 * matrix1;
    cout << "Matrix 4(*): " << endl;
    cout << matrix4 << endl;
    
    SquareMatrix matrix5 = matrix1 * 14;
     cout << "Matrix 5(*num): " << endl;
    cout << matrix5 << endl;

    cout << "Matrix determ: ";
    matrix4.printMatrixDeterminant();
    
    for (int i = 0; i < rows; i++)
        delete[] elements[i];
    delete[] elements;
    
    for (int i = 0; i < rows1; i++)
        delete[] elements1[i];
    delete[] elements1;
}




