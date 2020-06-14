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



int main(int argc, const char * argv[]) {
//    Undergraduate ug;
//    ug.m_score = 100;
//    ug.m_salary = 2000;
//    ug.m_grade = 4;
//    ug.study();
//    ug.work();
//    ug.play();
    
    Undergraduate ug;
//    ug.eat();
//    ug.Student::eat();
//    ug.Worker::eat();
//    ug.Undergraduate::eat();
    ug.m_age = 10;
    ug.Student::m_age = 11;
    ug.Worker::m_age = 12;
    ug.Undergraduate::m_age = 13;
    cout << ug.m_age << endl;
    
    
    return 0;
}

