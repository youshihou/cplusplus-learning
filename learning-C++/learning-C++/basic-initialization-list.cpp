//
//  basic-initialization-list.cpp
//  learning-C++
//
//  Created by Ankui on 6/14/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;


#if 0
int getAge() {
    cout << __func__ << endl;
    return 10;
}

int getHeight() {
    cout << __func__ << endl;
    return 100;
}

struct Person {
    int m_age;
#if 0
    int m_height;
//    Person() {
//        m_age = 0;
//        m_height = 0;
//    }
    
//    Person() {
//        Person(17, 180); // CARE!!! create a temp person object
//    }
    
    Person() :Person(17, 180) { // constructor call constructor must be in initialization list
        
    }
    Person(int age, int height) {
        m_age = age;
        m_height = height;
    }
    
//    Person(int age, int height) :m_age(age), m_height(height) { }
//    Person(int age, int height) :m_age(getAge()), m_height(getHeight()) { }
//    Person(int age = 16, int height = 160) :m_age(age), m_height(height) { }

    
    void diaplay() {
        cout << "age = " << m_age << ", height = " << m_height << endl;
    }
#endif
    
    
//    Person() {
//        cout << __func__ << endl;
//    }
//    Person(int age) {
//        cout << __func__ << "age" << endl;
//    }
    
    Person(int age) :m_age(age) { }
};

struct Student: Person {
    int m_no;
    
    // if Person not constructor will not call, if has will call Person's not parameter constructor
//    Student() {
//        cout << __func__ << endl;
//    }
    
    // if Person not parameter constructor will call Person's has parameter constructor
//    Student() :Person(10) {
//        cout << __func__ << endl;
//    }
    
    Student(int age, int no) :m_no(no), Person(age) { }
};
#endif



struct Person {
    Person() {
        cout << __func__ << endl;
    }
    ~Person() {
        cout << __func__ << endl;
    }
};

struct Student: Person {
    Student() {
        cout << __func__ << endl;
    }
    ~Student() {
        cout << __func__ << endl;
    }
};


//int main(int argc, const char * argv[]) {
int basic_initialization_list() {
//    Person p(18, 180);
//    p.diaplay();
//    Person p1;
//    p1.diaplay();
//    Person p2(17);
//    p2.diaplay();
    
//    Person p;
//    p.diaplay();
    
//    Student stu(18, 100);
//    cout << stu.m_age << endl << stu.m_no << endl;
    
    
    Student stu;
    

    return 0;
}
