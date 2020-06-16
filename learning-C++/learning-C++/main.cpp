//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>
using namespace std;

class Person {
    int m_age;
public:
    Person() {
        cout << __PRETTY_FUNCTION__ << " - " << this << endl;
    }
    Person(int age) :m_age(age) {
        cout << __PRETTY_FUNCTION__ << " - " << this << endl;
    }
    // default allow implicit constructor
    // explicit do not allow implicit constructor
//    explicit Person(int age) :m_age(age) {
//        cout << __PRETTY_FUNCTION__ << " - " << this << endl;
//    }
    Person(const Person &person) {
        cout << __PRETTY_FUNCTION__ << " - " << this << endl;
    }
    ~Person() {
        cout << __PRETTY_FUNCTION__ << " - " << this << endl;
    }
    void display() {
        cout << __PRETTY_FUNCTION__ << " - " << this->m_age << endl;
    }
};

void func(Person person) {
    
}

Person func_() {
    return 40; // call Person(int age)
}

int main(int argc, const char * argv[]) {
//    Person p1;
//    Person p2(10);
//    Person p3 = p2;
    
//    Person p4 = 20; // call Person(int age), equuivalent to Person p4(20);
    
//    func(30); // call Person(int age)
    
//    func_();
    
    Person p; // call Person()
    p = 50; // call Person(50)
    
    
    getchar();
    return 0;
}
