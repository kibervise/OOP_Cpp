#ifndef Vector_hpp
#define Vector_hpp
#include <iostream>

using namespace std;

template <class T> class Vector
{
private:
    T *vect;
    int size;
    int capacity;
public:
    Vector(int _capacity) :size(0), capacity(_capacity), vect(new T[_capacity]) {}; // конструктор с параметром
    Vector(const Vector<T>& _vect);                  //конструктор копирования
    ~Vector() { delete[] vect; };
    bool isEmpty() const { return size == 0; };      // проверка на пустоту
    int  getSize() const { return size; };           // возврат количества элементов вектора
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
            for (int i = 0; i < _vect.size; i++)
            {
                os << _vect.vect[i] << " ";
            }
        }
        return os;
    };
};

template <class T> Vector<T>::Vector(const Vector<T>& _vect)    // конструктор копирования
{
    size = _vect.size;
    capacity = _vect.capacity;
    vect = new T[_vect.capacity];
    for (int i = 0; i < _vect.size; i++)
        vect[i] = _vect.vect[i];
};

template <class T> const T Vector<T>::getHead() const           // возврат первого элемента вектора
{
    if (isEmpty())
    {
        return NULL;
    }
    else
    {
        return vect[0];
    }
};

template <class T> const T Vector<T>::getTail() const            // возврат последнего элемента вектора
{
    if (isEmpty())
    {
        return NULL;
    }
    else
    {
        return vect[size-1];
    }
};

template <class T> void Vector<T>::push(T _data)                // добавление элемента в конец
{
    if (getSize() == capacity)
        cout << "Размер вектора ограничен" << endl;
    else
    {
        vect[size] = _data;
        size++;
    }
}

template <class T> void Vector<T>::pop()                        // удаление элемента из конца
{
    if (isEmpty())
        cout << "Вектор пуст!!!" << endl; 
    else
    {
        size--;
    }
}

template <class T> void Vector<T>::Assign(int _size, T _value)  // формирование вектора
{
    delete[] vect;
    vect = new T[_size];
    size = _size;
    capacity = _size;
    for (int i = 0; i < _size; i++)
    {
        vect[i] = _value;
    }
}

template <class T> void Vector<T>::Sort()                       // сортировка вектора
{
    if (isEmpty())
        cout << "¬ектор пуст." << endl;
    else
    {
        for (int i = 0; i < size - 1; i++) {
            for (int j = 0; j < size - i - 1; j++) {
                if (vect[j] > vect[j + 1]) {
                    T temp = vect[j];
                    vect[j] = vect[j + 1];
                    vect[j + 1] = temp;
                }
            }
        }
    }
}


template <class T> Vector<T> &Vector<T>:: operator = (const Vector<T> &_vect) // оператор присваивания
{
    delete[] vect;
    size = _vect.size;
    capacity = _vect.capacity;
    vect = new T[_vect.capacity];
    for (int i = 0; i < _vect.size; i++)
        vect[i] = _vect.vect[i];
    return *this;
};

template <class T> T Vector<T>:: operator [] (int _key)            // оператор индексирования
{
    if (isEmpty())
        cout << "Bектор пуст." << endl;
    else
    {
        if (_key >= 0 && _key < size)
        {
            return vect[_key];
        }
        else
            cout << "Значение индекса не пренадлежит промежутку" << endl;
    }
    return NULL;
    
};

#endif /* Vector_hpp */
