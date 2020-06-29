//
//  basic-template.cpp
//  cplusplus-learning
//
//  Created by Ankui on 6/19/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include "array.hpp"

#if 0
class Point {
    friend ostream & operator<<(ostream &, const Point &);
    int m_x;
    int m_y;
public:
    Point(int x = 0, int y = 0) :m_x(x), m_y(y) {}
    const Point operator+(const Point &point) const {
        return Point(m_x + point.m_x, m_y + point.m_y);
    }
};
ostream & operator<<(ostream &cout, const Point & point) {
    return cout << "(" << point.m_x << ", " << point.m_y << ")";
//    return cout;
}
Point add(Point a, Point b) {
    return a + b;
}
int add(int a, int b) {
    return a + b;
}
double add(double a, double b) {
    return a + b;
}


template <typename T> T add(T a, T b) { // in here typename == class
    return a + b;
}
#endif


#if 0
class Array {
    int *m_data;
    int m_size;
    int m_capacity;
    
    int get(int index) {
        if (index < 0 || index >= m_size) {
            throw "index error!";
        }
        return m_data[index];
    }
public:
    Array(int capacity = 0) {
        m_capacity = capacity > 0 ? capacity : 10;
        m_data = new int[capacity]();
    }
    ~Array() {
        if (m_data == nullptr) { return; }
        delete [] m_data;
        m_data = nullptr;
    }
    
    int size() {
        return m_size;
    }
    void add(int value) {
        if (m_size == m_capacity) {
            int *old_data = m_data;
            size_t new_size = m_capacity << 1;
            int *new_data = new int[new_size]();
            memcpy(new_data, old_data, new_size);
            m_data = new_data;
            delete [] old_data;
            
            cout << "new_size = " << new_size << endl;
        }
        m_data[m_size++] = value;
    }
    int operator[](int index) {
        return get(index);
    }
};
#endif


#if 0
template <class Element>
class Array {
    Element *m_data;
    int m_size;
    int m_capacity;
    
    Element get(int index) {
        if (index < 0 || index >= m_size) {
            throw "index error!";
        }
        return m_data[index];
    }
public:
    Array(int capacity = 0) {
        m_capacity = capacity > 0 ? capacity : 10;
        m_data = new Element[capacity]();
    }
    ~Array() {
        if (m_data == nullptr) { return; }
        delete [] m_data;
        m_data = nullptr;
    }
    
    int size() {
        return m_size;
    }
    void add(Element value) {
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
    Element operator[](int index) {
        return get(index);
    }
};
#endif





//int main(int argc, const char * argv[]) {
int basic_template() {
//    cout << add(10, 20) << endl;
//    cout << add(1.0, 2.0) << endl;
//    cout << add(Point(1, 2), Point(3, 4)) << endl;
//    add<int>(10, 20);
//    add<double>(1.1, 2.2);
//    add<Point>(Point(1, 1), Point(2, 2));
    
    
//    Array<int> array;
//    for (int i = 1; i < 11; i++) {
//        array.add(i * 10);
//    }
//    cout << array << endl;
//    array.remove(0);
//    cout << array << endl;
//    array.remove(3);
//    cout << array << endl;
//    array.remove(array.size() - 1);
//    cout << array << endl;
//    array.insert(array.size(), 12);
//    cout << array << endl;
//    array.insert(0, 11);
//    cout << array << endl;
//    array.insert(3, 120);
//    cout << array << endl;

//    cout << "size = " << array.size() << endl;
//    cout << array.get(0) << endl;
//    cout << array[0] << endl;
//    cout << array[11] << endl;
    
//    Array<Point> array;
//    array.add(Point(1, 2));
//    array.add(Point(3, 4));
//    cout << array << endl;
    
    return 0;
}
