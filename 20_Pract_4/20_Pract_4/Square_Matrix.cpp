#include "Square_Matrix.hpp"
#include <cmath>
#include <iostream>
using namespace std;

Square_Matrix::Square_Matrix()
{
    int size = 0;
    int array = NULL;
}

Square_Matrix::Square_Matrix(int Size) : size(Size)
{
    
    array = new int*[size];
    for(int i = 0; i < size; i++)
    {
        array[i] = new int(size);
        for(int j = 0; j < size; j++)
        {
            array[i][j] = rand() % 14;
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Constughbj-------";
}

Square_Matrix::~Square_Matrix()
{
    for(int i = 0; i < size; i++)
        delete [] array[i];
    delete [] array;
}

void Square_Matrix::printMatrixElements(){
    for (int i = 0; i < size; i++){
        for (int j = 0; j < size; j++){
        }
        cout << endl;
     }
}

     /*
void Square_Matrix::printMatrixDeterminant(int **array){
    int i,j,p,k=0,t;
    float kst = 0;
    
    p=0;
    for (i=0; i<size-1; i++)
    {
        t=1;
        while(array[i][i]==0)
        {
            for(j=0; j<size; j++)
            {
                array[i][j]=kst;
                array[i][j]=array[i+t][j];
                array[i+t][j]=kst;
            }
            p++;
            t++;
        }
        
        for (k=i+1; k<size; k++)
        {
            kst=array[k][i]/array[i][i];
            for(j=0; j<size; j++)
                array[k][j]-=array[i][j]*kst;
        }
    }
    
    kst=pow(-1,p);
    for(i=0; i<size; i++)
        kst*=array[i][i];
    
    printf("Определитель равен: %14.3f",kst);
}

*/

Square_Matrix Square_Matrix::operator +(const Square_Matrix& a)
{
    Square_Matrix result(size);
    
    for(int i = 0; i < a.size; i++){
        for(int j = 0; j < a.size; j++){
            result.array[i][j] = a.array[i][j] + array[i][j];
        }
    }
    return result;
}
/*
Square_Matrix Square_Matrix::operator -(const Square_Matrix& a)
{
    Square_Matrix result(size);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            result.array[i][j] = array[i][j] - a.array[i][j];
        }
    }
    return result;
}

Square_Matrix Square_Matrix::operator *(const Square_Matrix& a)
{
    Square_Matrix result(size);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++)
        {
            result.array[i][j] = 0;
            for(int k = 0; k < a.size; k++){
                result.array[i][j] += array[i][k] * a.array[k][j];
            }
        }
    }
    return result;
}

Square_Matrix Square_Matrix::operator * (double number)
{
    Square_Matrix result(size);
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            result.array[i][j] = array[i][j] * number;
        }
    }
    return result;
}*/












