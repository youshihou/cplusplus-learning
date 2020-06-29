//
//  basic-destructor.cpp
//  cplusplus-learning
//
//  Created by Ankui on 6/14/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

#if 0
struct Car {
    int m_price;
    
    Car () {
        m_price = 0;
        cout << __func__ << endl;
    }
    
    ~Car () {
        cout << __func__ << endl;
    }
};

struct Person {
    int m_age;
    Car *m_car;
    
    Person () {
        m_age = 0;
        m_car = new Car();
        cout << __func__ << endl;
    }
    
    ~Person () {
        delete m_car;
        cout << __func__ << endl;
    }
};
#endif


//int main(int argc, const char * argv[]) {
int basic_destructor() {
//    Person p; // call destructor
//    Person *p0 = new Person; // call destructor
//    delete p0;
//    Person *p1 = (Person *)malloc(sizeof(Person)); // not call destructor
//    free(p1);
    
//    Person p;
    
    
    return 0;
}
