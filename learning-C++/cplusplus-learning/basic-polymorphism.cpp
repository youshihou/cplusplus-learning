//
//  basic-polymorphism.cpp
//  learning-C++
//
//  Created by Ankui on 6/14/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

#if 0
struct Person {
    int m_age;
    
};
struct Student: Person {
    int m_score;
};
#endif

#if 0
struct Animal {
    int m_age;
    virtual void speak() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual void run() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    
    Animal() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual ~Animal() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};
struct Cat: Animal {
    int m_life;
    void speak() override {
//        Animal::speak(); // call Animal's speck
        cout << __PRETTY_FUNCTION__ << endl;
    }
    void run() override {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    
    Cat() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    ~Cat() { // if Animal's destructor is virtual, Cat's destructor also virtual
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

void func(Animal *p) {
    p->speak();
    p->run();
}
#endif


#if 0
struct Animal {
    virtual void speak() = 0; // pure virtual function
    virtual void run() = 0;
    
    Animal() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual ~Animal() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};
struct Dog: Animal {
    void speak() override {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    void run() override {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    
    Dog() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    ~Dog() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};
struct Cat: Animal {
    void speak() override {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    void run() override {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    
    Cat() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    ~Cat() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};
#endif



//int main(int argc, const char * argv[]) {
int basic_polymorphism() {
//    Student *p = new Student();
//    delete p;
            
//    func(new Cat());
    
//    cout << sizeof(Cat) << endl;
    
//    Animal *p = new Cat();
//    p->speak();
//    delete p;
    
    
//    Animal anim; // has pure virtual function is abstract, not allowed has instance
    
    return 0;
}
