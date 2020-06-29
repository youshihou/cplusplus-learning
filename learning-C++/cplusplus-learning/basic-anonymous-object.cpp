//
//  basic-anonymous-object.cpp
//  learning-C++
//
//  Created by Ankui on 6/16/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

#if 0
class Car {
public:
    Car() {
        cout << __PRETTY_FUNCTION__ << " - " << this << endl;
    }
    Car(const Car &car) {
        cout << __PRETTY_FUNCTION__ << " - " << this << endl;
    }
    ~Car() {
        cout << __PRETTY_FUNCTION__ << " - " << this << endl;
    }
    void run() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

void func(Car car) { // here will call copy constructor
    
}
void func_(Car &car) {
    car.run();
}
void func__(Car *car) {
    car->run();
}

Car test() {
    Car car;
    return car;
}

Car test_() {
    return Car();
}
#endif


//int main(int argc, const char * argv[]) {
int basic_anonymous_object() {
//    Car car1;
//    func(car1);
//    func_(car1);
//    func__(&car1);
    
//    Car car2;
//    car2 = test();
    
//    Car car3 = test();
    
    
//    Car().run();
//    func(Car());
    
//    Car car;
//    car = test_();
    
    return 0;
}
