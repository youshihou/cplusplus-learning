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
class Person {
    int m_age = 5; // the compiler will automatic generate 'Person()' constructor function, equivalent to 'Person() { m_age = 5; }'
public:
    virtual void func() {} // the compiler will automatic generate 'Person()' constructor function
};
class Student: virtual public Person { // the compiler will automatic generate 'Student()' constructor function
    int m_score;
};
#endif

#if 0
class Car {
    int m_price;
public:
    Car() {}
};
class Person {
    Car car; // if Car has constructor, so Person will automatic generate 'Person()' constructor function
};
#endif


class Person {
public:
    Person() {}
};
class Student: public Person {
    // if parent class has constructor, so subclass will automatic generate 'Student()' constructor function
    // subclass will priority call parent constructor
};


int main(int argc, const char * argv[]) {
//    Person person;
//    Student student;
    
//    Person person;
    Student student;
    
    getchar();
    return 0;
}
