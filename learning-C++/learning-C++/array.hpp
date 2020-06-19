//
//  array.hpp
//  learning-C++
//
//  Created by Ankui on 6/18/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#ifndef array_hpp
#define array_hpp

#include <iostream>
using namespace std;

template <class Element>
class Array {
    Element *m_data;
    int m_size;
    int m_capacity;
    
    void check_index(int index);
    Element get(int index);
public:
    Array(int capacity = 0);
    ~Array();
    
    int size();
    void add(Element value);
    void remove(int index);
    Element operator[](int index);
    
    template <class Type>
    friend ostream & operator<<(ostream &, const Array<Type> &); // CAER!!!!!! here template <class Type> and const Array<Type> &
};

template <class Element>
void Array<Element>::check_index(int index) {
    if (index < 0 || index >= m_size) {
        throw "index error!";
    }
}

template <class Element>
Element Array<Element>::get(int index) {
    check_index(index);
    return m_data[index];
}

template <class Element>
Array<Element>::Array(int capacity) { // CARE!!! default parameter only write in declaration
    m_capacity = capacity > 0 ? capacity : 10;
    m_data = new Element[capacity]();
}

template <class Element>
Array<Element>::~Array() {
    if (m_data == nullptr) { return; }
    delete [] m_data;
    m_data = nullptr;
}

template <class Element>
int Array<Element>::size() {
    return m_size;
}

template <class Element>
void Array<Element>::add(Element value) {
    if (m_size == m_capacity) {
        Element *old_data = m_data;
        size_t new_size = m_capacity << 1;
        Element *new_data = new Element[new_size]();
        memcpy(new_data, old_data, new_size);
        m_data = new_data;
        delete [] old_data;
        
        cout << "new_size = " << new_size << endl;
    }
    m_data[m_size++] = value;
}

template <class Element>
void Array<Element>::remove(int index) {
    check_index(index);
    
    
}

template <class Element>
Element Array<Element>::operator[](int index) {
    return get(index);
}

template <class Element>
ostream & operator<<(ostream &cout, const Array<Element> &array) {
    cout << "[";
    for (int i = 0; i < array.m_size; i++) {
        if (i != 0) {
            cout << ", ";
        }
        cout << array.m_data[i];
        
//        if (i != array.m_size - 1) {
//            cout << ", ";
//        }
    }
    return cout << "]";
}


#endif /* array_hpp */
