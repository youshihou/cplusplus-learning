//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>
using namespace std;

#if 0
class Car {
public:
    int m_age;
    static int m_price;
    static void run() {
        cout << __PRETTY_FUNCTION__ << endl;
        
        Car c;
        c.m_age = 0; // can access by object
        
//        this // ERROR!!! no this pointer
//        m_age = 0; // ERROR!!!, m_age save in object, no this pointer
//        func(); // ERROR!!! by object call
        
        m_price = 11; // allowed
        func_(); // allowed
    }
    static void func_() {
        m_price = 12;
    }
    
    void func() {
        this->m_age = 10;
        
        m_price = 13; // allowed
        func_(); // allowed
    }
};

int Car::m_price = 0; // static must be initial in here, no need write static
#endif


#if 0
class Person {
public:
    static int m_age;
};
int Person::m_age = 0;

class Student: public Person {
public:
    static int m_age;
};
int Student::m_age = 0;
#endif

#if 0
class Car {
    static int ms_count;
    
public:
    Car() {
        ms_count++;
    }
    ~Car() {
        ms_count--;
    }
    
    static int getCount() {
        return ms_count;
    }
};
int Car::ms_count = 0;
#endif


class Car {
    static Car* ms_car;
    Car() { }
    ~Car() { }
public:
    static Car* shared() {
        if (ms_car == nullptr) {
            ms_car = new Car();
        }
        return ms_car;
    }
    static void destroy() {
        if (ms_car != nullptr) {
            delete ms_car;
            ms_car = nullptr;
        }
    }
    
    
    void run() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};
Car* Car::ms_car = nullptr;


int main(int argc, const char * argv[]) {
//    Car car;
//    car.m_price = 100; // by object access
//    car.run();
//
//    Car *p = new Car();
//    p->m_price = 110; // by object pointer access
//    p->run();
//    delete p;
//
//    Car::m_price = 120; // by class access
//    Car::run();
    
//    cout << &Person::m_age << endl;
//    cout << &Student::m_age << endl;
    
//    Car c;
//    cout << Car::getCount() << endl;
    
    
//    Car car;
    Car *p = Car::shared();
    p->run();
//    delete p;
    Car *p1 = p->shared();
    cout << p << endl << p1 << endl << Car::shared() << endl;
    
    
    return 0;
}

