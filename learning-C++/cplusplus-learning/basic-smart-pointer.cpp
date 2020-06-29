//
//  basic-smart-pointer.cpp
//  learning-C++
//
//  Created by Ankui on 6/20/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

#if 0
void func() {
    throw 666;
}

class person {
    int m_age;
public:
    person(int age = 0) :m_age(age) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    ~person() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    
    void run() {
        cout << __PRETTY_FUNCTION__ << " - " << m_age << endl;
    }
};



template <typename T>
class smart_ptr {
    T *m_ptr;
public:
    smart_ptr(T *ptr) :m_ptr(ptr) {}
    ~smart_ptr() {
        if (m_ptr == nullptr) { return; }
        delete m_ptr;
        m_ptr = nullptr;
    }
    
    T * operator->() {
        return m_ptr;
    }
};
#endif


#if 0
class person;

class car {
public:
//    person *m_person;
//    shared_ptr<person> m_person = nullptr;
    weak_ptr<person> m_person;

    car() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    ~car() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};

class person {
public:
//    car *m_car;
    shared_ptr<car> m_car = nullptr;
  
    person() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    ~person() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};
#endif






//int main(int argc, const char * argv[]) {
int basic_smart_pointer() {
//    try {
//        int *p = new int();
//        func();
//        delete p;
//    } catch (...) {
//
//    }
    
//    person *p0 = new person();
//    delete p0;
    
//    auto_ptr<person> p(new person());
//    p->run();
    
//    person p0(10);
//    auto_ptr<person> p1(&p0); // ERROR!!! object must in heap
//    p1->run();
    
    
//    smart_ptr<person> p(new person(18));
//    p->run();
    
    
    
//    auto_ptr<person> p(new person[5]()); // ERROR!!! not use in array
//    p->run();

    
//    shared_ptr<person> p(new person(10));
//    p->run();
  
//    shared_ptr<person[]> p(new person[5]); // ERROR!!! why?
    
//    shared_ptr<person> plist(new person[5](), [] (person *p) { delete [] p; });
    
    
//    shared_ptr<person> p1(new person(18));
//    shared_ptr<person> p2 = p1;
//    shared_ptr<person> p3 = p2;
//    shared_ptr<person> p4(p3);
//    cout << p1.use_count() << endl;
    
    
    
//    // ERROR!!! destructor twice
//    person *p = new person(10); // person();
//
//    {
//        shared_ptr<person> p1(p);
//    } // ~person();
//
//    {
//        shared_ptr<person> p2(p);
//    } // ~person();
//
    
    
//    shared_ptr<person> p(new person());
//    shared_ptr<car> c(new car());
//
//    p->m_car = c;
//    c->m_person = p;
    
    
    // at the same time can only be one point
//    unique_ptr<person> p1(new person());
//    unique_ptr<person> p2 = p; // ERROR!!!
//    unique_ptr<person> p3(p); // ERROR!!!
    
//    unique_ptr<person> p1(new person());
//    unique_ptr<person> p2 = move(p1);
    
    
    
    
    return 0;
}
