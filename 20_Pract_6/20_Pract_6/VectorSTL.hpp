#ifndef VectorSTL_hpp
#define VectorSTL_hpp
#include <vector>
#include <iostream>
using namespace std;

template <class T> class Vector
{
private:
    vector <T> vect;
public:
    Vector <T>(){};
    Vector<T>(const Vector<T> &_vect);
    bool isEmpty() const { return vect.size() == 0; }
    int  getSize() const { return vect.size(); }
    void push(T _data);                              // добавление элемента в конец
    void pop();                                      // удаление элемента из конца
    const T getHead() const;                         // возврат первого элемента вектора
    const T getTail() const;                         // возврат последнего элемента вектора
    void Assign(int _size, T _value);                // формирование вектора
    void Sort();                                     // сортировка вектора
    Vector<T> &operator = (const Vector<T> &_vect);   // оператор присваивания
    T operator [] (int _index);                        // оператор индексирования
    
    friend ostream& operator << (ostream&os, const Vector<T>& _vect) {
        if (_vect.isEmpty())
            os << "Вектор пуст!";
        else
        {
            for (int i = 0; i < _vect.getSize(); i++)
            {
                os << _vect.vect[i] << " ";
            }
        }
        return os;
    }
};

template <class T>
Vector<T>::Vector(const Vector<T> &_vect){
    for(int i =0; i < getSize(); i++){
        vect.pop_back();
    }
    for(int i = 0; i < _vect.vect.size();  i++){
        vect.push_back(_vect.vect[i]);
    }
}


template <class T> const T Vector<T>::getHead() const
{
    if (isEmpty())
    {
        return NULL;
    }
    else
    {
        return vect.front();
    }
};

template <class T> const T Vector<T>::getTail() const
{
    if (isEmpty())
    {
        return NULL;
    }
    else
    {
        return vect.back();
    }
};

template <class T> void Vector<T>::push(T _data)
{
        vect.push_back(_data);
}

template <class T> void Vector<T>::pop()
{
    if (isEmpty())
        cout << "Вектор пуст!!!" << endl;
    else
    {
        vect.pop_back();
    }
}

template <class T> void Vector<T>::Assign(int _size, T _value)
{
    vect.assign(_size, _value);
}

template <class T> void Vector<T>::Sort()
{
    if (isEmpty())
        cout << "Bектор пуст." << endl;
    else
    {
        sort(vect.begin(), vect.end());
    }
}


template <class T> Vector<T> &Vector<T>:: operator = (const Vector<T> &_vect) // оператор присваивания
{
    vect.clear();
    for(int i =0; i < getSize(); i++){
        vect.pop_back();
    }
    for(int i = 0; i < _vect.vect.size();  i++){
        vect.push_back(_vect.vect[i]);
    }
    return *this;
};

template <class T> T Vector<T>:: operator [] (int _key)            // оператор индексирования
{
    if (isEmpty())
        cout << "Bектор пуст." << endl;
    else
    {
        if (_key >= 0 && _key < vect.size())
        {
            return vect[_key];
        }
        else
            cout << "Значение индекса не пренадлежит промежутку" << endl;
    }
    return NULL;
    
};

#endif /* VectorSTL_hpp */
