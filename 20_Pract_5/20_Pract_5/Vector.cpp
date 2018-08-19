#include "Vector.hpp"
#include <iostream>
using namespace std;

int main()
{
    Vector <int> vect1(3);
    vect1.pop();
    vect1.push(16);
    vect1.push(15);
    vect1.push(14);
    cout << "Вывод элементов вектора: " << vect1 << endl;
    vect1.Sort();
    cout << "Отсортированый вектор: " << vect1 << endl;
    cout << "Количество элементов вектора: " << vect1.getSize() << endl;
    cout << "Возврат первого элемента: " << vect1.getHead() << endl;
    cout << "Возврат последнего элемента: " << vect1.getTail() << endl;
    vect1.pop();
    cout << "После удаления элемента осталось: " << vect1 << endl;
    cout << "Количество элементов вектора: " << vect1.getSize() << endl;
    Vector <int> vect2(vect1);
    cout << "Конструктор копирования: " << vect2 << endl;
    vect1.pop();
    cout << "После удаления элемента осталось: " << vect1 << endl;
    cout << "-----------------" << endl;
    Vector <int> vect3(3);
    cout << "Вывод элементов вектора: " << vect3 << endl;
    vect3 = vect1;
    vect3.push(22);
    vect3.push(23);
    cout << "Вывод элементов вектора: " << vect3 << endl;
    cout << "Операция индексирования: " << vect3[2] << endl;
    vect1.Assign(4, 100);
    cout << "Формирование вектора: " << vect1 << endl;
}
