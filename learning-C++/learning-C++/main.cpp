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
struct Person {
    int m_age;
    
};
struct Student: Person {
    int m_score;
};
#endif


struct Animal {
    int m_age;
    virtual void speak() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    virtual void run() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};
struct Cat: Animal {
    int m_life;
    void speak() override {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    void run() override {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

void func(Animal *p) {
    p->speak();
    p->run();
}


int main(int argc, const char * argv[]) {
//    Student *p = new Student();
//    delete p;
        
//    func(new Cat());
    cout << sizeof(Cat) << endl;
    
    return 0;
}

