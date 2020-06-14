//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>

using namespace std;

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


int main(int argc, const char * argv[]) {
    {
#if 0
        Person p; // call destructor
        Person *p0 = new Person; // call destructor
        delete p0;
        Person *p1 = (Person *)malloc(sizeof(Person)); // not call destructor
        free(p1);
#endif
        
    }
    
    Person p;
    
    
    return 0;
}

