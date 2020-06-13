//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>

using namespace std;

class Person_ {
//private: // class default private
    int m_age;
    
public:
    void run() {
        cout << __func__ << ", age = " << m_age << endl;
    }
};

struct Person {
//private: // struct default public
    int m_id;
    int m_age;
    int m_height;
    
    void run() {
        cout << __func__ << ", age = " << m_age << endl;
//        this->m_age; // this is a pointer
//        this.m_age; // ERROR!!! . left must be object
    }
    
    void display() {
        cout << "id = " << m_id << ", age = " << m_age << ", height = " << m_height << endl;
    }
};



int main(int argc, const char * argv[]) {
    {
#if 0
//        Person_ pp;
//        pp.m_age = 20; // CARE!!!
//        pp.run();
//
//        Person p;
//        p.m_age = 10;
//        p.run();
//        Person *p1 = &p;
//        p1->m_age = 20;
    
        
        Person p;
        p.m_id = 10;
        p.m_age = 20;
        p.m_height = 30;
        
        Person *pp = (Person *)&p.m_age;
        pp->m_id = 40;
        pp->m_age = 50;
        
        p.display(); // CARE!!! this == p, is &p
        pp->display(); // CARE!!! this == pp, is &p.m_age
#endif
        
        
        
    }
    {
#if 0
        int *p = (int *)malloc(4);
        *p = 10;
        free(p);

        int *pp = new int;
        *pp = 10;
        delete pp;

        char *c = new char[4];
        *c = 10;
        delete [] c;
        
        int *p0 = new int;
        int *p1 = new int();
        int *p2 = new int(5);
        cout << *p0 << endl << *p1 << endl << *p2 << endl;
        delete p0;
        delete p1;
        delete p2;
        int *p3 = new int[3];
        int *p4 = new int[3]();
        int *p5 = new int[3]{};
        int *p6 = new int[3]{ 5 };
        cout << *p3 << endl << *p4 << endl << *p5 << endl << *p6 << endl;
        delete [] p3;
        delete [] p4;
        delete [] p5;
        delete [] p6;
        
#endif
    }
    
    
    
    
    
    
    
    return 0;
}

