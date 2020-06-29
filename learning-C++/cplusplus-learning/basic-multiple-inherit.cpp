//
//  basic-multiple-inherit.cpp
//  cplusplus-learning
//
//  Created by Ankui on 6/14/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

#if 0
struct Student {
    int m_score;
    void study() {
        cout << __PRETTY_FUNCTION__ << " score = " << m_score << endl;
    }
    Student(int score) :m_score(score) { }
};

struct Worker {
    int m_salary;
    void work() {
        cout << __PRETTY_FUNCTION__ << " salary = " << m_salary << endl;
    }
    Worker(int salary) : m_salary(salary) { }
};

struct Undergraduate: Student, Worker {
    int m_grade;
    void play() {
        cout << __PRETTY_FUNCTION__ << " grade = " << m_grade << endl;
    }
    Undergraduate(int score, int salary, int grade) : Student(score), Worker(salary), m_grade(grade) { }
};
#endif

#if 0
struct Student {
    int m_age;
    void eat() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};
struct Worker {
    int m_age;
    void eat() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};
struct Undergraduate: Student, Worker {
    int m_age;
    void eat() {
        cout << __PRETTY_FUNCTION__ << endl;
    }
};
#endif

#if 0
struct Person {
    int m_age;
};
struct Student: Person {
    int m_score;
};
struct Worker: Person {
    int m_salary;
};
struct Undergraduate: Student, Worker {
    int m_grade;
};
#endif

#if 0
struct Person {
    int m_age;
};
struct Student: virtual Person {
    int m_score;
};
struct Worker: virtual Person {
    int m_salary;
};
struct Undergraduate: Student, Worker {
    int m_grade;
};
#endif


//int main(int argc, const char * argv[]) {
int basic_multiple_inherit() {
//    Undergraduate ug;
//    ug.m_score = 100;
//    ug.m_salary = 2000;
//    ug.m_grade = 4;
//    ug.study();
//    ug.work();
//    ug.play();
    
//    Undergraduate ug;
//    ug.eat();
//    ug.Student::eat();
//    ug.Worker::eat();
//    ug.Undergraduate::eat();
//    ug.m_age = 10;
//    ug.Student::m_age = 11;
//    ug.Worker::m_age = 12;
//    ug.Undergraduate::m_age = 13;
    
//    ug.m_age = 10;
//    cout << sizeof(Person) << endl; // 4
//    cout << sizeof(Student) << endl; // 16
//    cout << sizeof(Worker) << endl; // 16
//    cout << sizeof(Undergraduate) << endl; // CARE!!! why 40?
    
    return 0;
}
