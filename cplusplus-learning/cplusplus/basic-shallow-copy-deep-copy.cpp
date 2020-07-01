//
//  basic-shallow-copy-deep-copy.cpp
//  cplusplus-learning
//
//  Created by Ankui on 6/15/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

#if 0
class Car {
    int m_price;
    char *m_name;
    void _copy(const char *name) {
        if (name == nullptr) { return; }
        size_t len = strlen(name) + 1;
        m_name = new char[len] {};
        memcpy(m_name, name, len);
    }
public:
//    Car(int price = 0, char *name = nullptr) :m_price(price), m_name(name) {}
    Car(int price = 0, const char *name = nullptr) :m_price(price) {
//        if (name == nullptr) { return; }
//        size_t len = strlen(name) + 1;
//        m_name = new char[len] {};
//        memcpy(m_name, name, len);
        
        _copy(name);
        cout << __PRETTY_FUNCTION__ << endl;
    }
    Car(const Car &car) :m_price(car.m_price) {
//        if (car.m_name == nullptr) { return; }
//        size_t len = strlen(car.m_name) + 1;
//        m_name = new char[len]();
//        strcpy(m_name, car.m_name);
        
        _copy(car.m_name);
        cout << __PRETTY_FUNCTION__ << endl;
    }
    
    ~Car() {
        if (m_name == nullptr) { return; }
        delete [] m_name;
        m_name = nullptr;
        
        cout << __PRETTY_FUNCTION__ << endl;
    }
    void display() {
        cout << m_price << ", " << m_name << endl;
    }
};
#endif

// the default is shallow copy, if you want achieve to a deep copy, need custom copy constructor!
// if member variable has pointer type, maybe need deep copy


//int main(int argc, const char * argv[]) {
int basic_shallow_copy_deep_copy() {
//    const char *name = "BMW";
//    Car car(100, name);
//    car.display();
    
//    char name[] = {'b', 'm', 'w', '\0'};
//    Car *p = new Car(200, name);
//    p->display();
//    Car *c = new Car(110, "bmw");
//    c->display();
    
//    char *name_ = new char[4] {'b', 'm', 'w', '\0'};
//    Car *car = new Car(120, name_);
//    car->display();
//    delete [] name_;
    
//    Car car1(100, "bmw");
//    Car car2 = car1;
//    car2.display();
    
    
    
    return 0;
}
