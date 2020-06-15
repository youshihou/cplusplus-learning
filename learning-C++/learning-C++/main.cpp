//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>
using namespace std;

class Car {
public:
    const int mc_price = 0; // const variable must be initial inside class
    Car() :mc_price(0) { // also initial here
        
    }
    
    static int ms_weight; // static variable must be initial outside class
    int m_age;
    // CARE!!! no static, declaration and implementation must be write const
    void run() const {
        cout << __PRETTY_FUNCTION__ << endl;
//        m_age = 0; // inside do not modify non-static variable
//        func(); // inisde do not call non-static function
        func_(); // allowed
        func__(); // allowed
    }
    void run() { // const and non-const function overload
        cout << __PRETTY_FUNCTION__ << endl;
    }
    
    void func() {
        m_age = 0;
        run();
        func_(); // non-const function can call const function
        func__();
    }
    void func_() const {
        
    }
    static void func__() {
//        m_age = 0; // do not access non-static variable
//        mc_price = 0; // do not access const variable;
        ms_weight = 0;
//        func_(); // ERROR!!!
//        func(); // ERROR!!!
    }
};
int Car::ms_weight = 0;



int main(int argc, const char * argv[]) {
    // non-const object or pointer will priority call non-const function
    Car car;
    car.run();
    car.func();
    car.func_();
    
    // const object can not call non-const function, const object or pointer only call const or static function
    const Car car1;
    car1.run();
    car1.func_();
//    car1.test(); // ERROR!!!

    
    
    return 0;
}

