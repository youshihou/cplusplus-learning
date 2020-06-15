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
class Car {
    int m_price;
    int m_length;
public:
    Car(int price = 0, int length = 0) :m_price(price), m_length(length) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
//    Car(const Car &car) {
//        cout << __PRETTY_FUNCTION__ << endl;
//        m_price = car.m_price;
//        m_length = car.m_length;
//    }
    Car(const Car &car) :m_price(car.m_price), m_length(car.m_length) {
        cout << __PRETTY_FUNCTION__ << endl;
    }
    
    void display() {
        cout << m_price << endl << m_length << endl;
    }
};
#endif


class Person {
    int m_age;
public:
    Person(int age = 0) :m_age(age) {}
    Person(const Person &person) :m_age(person.m_age) {}
    
    void diaplay() {
        cout << m_age << endl;
    }
};
class Student: public Person {
    int m_score;
public:
    Student(int age = 0, int score = 0) :Person(age), m_score(score) {}
    Student(const Student &student) :Person(student), m_score(student.m_score) {}
    
    void diaplay() {
        Person::diaplay();
        cout << m_score << endl;
    }
};


int main(int argc, const char * argv[]) {
//    Car car(100, 5);
//    Car car1(car);
//    car1.display();
    
    Student stu1(18, 100);
    Student stu2(stu1);
    stu2.diaplay();
    
    return 0;
}

