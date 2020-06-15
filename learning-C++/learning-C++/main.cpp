//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>
using namespace std;

#if 1
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
        cout << m_price << ", " << m_length << endl;
    }
};
#endif


#if 0
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
    // subclass constructor will call parent class non-parameter constructor
    
    
    void diaplay() {
        Person::diaplay();
        cout << m_score << endl;
    }
};
#endif

int main(int argc, const char * argv[]) {
    Car car1(100, 5); // call constructor
    Car car2(car1); // call copy constructor
    Car car3 = car2; // call copy constructor
    Car car4; // call constructor
    car4.display();
    car4 = car3; // assignment, because car3 and car4 already exists.
    // not create a new object, constructor called only when creating a new object.
    car4.display();
    
//    Student stu1(18, 100);
//    Student stu2(stu1);
//    stu2.diaplay();
    
    return 0;
}

