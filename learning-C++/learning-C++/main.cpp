//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>

using namespace std;

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
    
    
    Person () {
        m_age = 0;
        cout << __func__ << endl;
    }
    Person (int age) {
        m_age = age;
        cout << __func__ << ", age = " << m_age << endl;
    }
};


int main(int argc, const char * argv[]) {
    
    
    
    return 0;
}

