#include "Square_Matrix.cpp"
#include <iostream>
using namespace std;

int main()
{
    int **matrixMain;
    int sizeMain;
    cout << "size: ";
    cin >> sizeMain;
    // int elementMain;
    //cout << "elem: ";
    //cin >> elementMain;
    matrixMain = new int *[sizeMain];
    for(int i = 0; i < sizeMain; i++)
    {
        matrixMain[i] = new int[sizeMain];
    }
    Square_Matrix matrixFirst(sizeMain);
    matrixFirst.printMatrixElements();
    
    for(int i = 0; i < sizeMain; i++)
        delete [] matrixMain[i];
    delete [] matrixMain;
    
    
     cout << "size: ";
     cin >> sizeMain;
     //  cout << "elem: ";
     //cin >> elementMain;
     
     matrixMain = new int *[sizeMain];
     for(int i = 0; i < sizeMain; i++)
     {
     matrixMain[i] = new int[sizeMain];
     }
     
     Square_Matrix matrixSecond(sizeMain);
     matrixSecond.printMatrixElements();
     for(int i = 0; i < sizeMain; i++)
     delete [] matrixMain[i];
     delete [] matrixMain;
     
    Square_Matrix c = matrixFirst + matrixSecond;
    c.printMatrixElements();
}
