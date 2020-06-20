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




int main(int argc, const char * argv[]) {
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
    
    return 0;
}
