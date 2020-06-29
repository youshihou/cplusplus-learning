//
//  basic-operator-overload.cpp
//  learning-C++
//
//  Created by Ankui on 6/16/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

#if 0
class Point {
//    friend Point add(Point, Point);
//    friend Point operator+(Point, Point);
//    friend Point operator+(const Point &, const Point &);
    friend ostream & operator<<(ostream &, const Point &);
    friend istream & operator>>(istream &, Point &);
    
    int m_x;
    int m_y;
public:
    Point(int x, int y) :m_x(x), m_y(y) {}
    void display() {
        cout << "(" << m_x << ", " << m_y << ")" << endl;
    }
    
    const Point operator+(const Point &point) const {
        return Point(this->m_x + point.m_x, this->m_y + point.m_y);
    }
    const Point operator-(const Point &point) const {
        return Point(m_x - point.m_x, m_y - point.m_y);
    }
    Point & operator+=(const Point &point) {
        m_x += point.m_x;
        m_y += point.m_y;
        return *this; // CARE!!! is *this not this
    }
    bool operator==(const Point &point) const {
        return m_x == point.m_x && m_y == point.m_y;
    }
    bool operator!=(const Point &point) const {
        return m_x != point.m_x || m_y != point.m_y;
    }
    const Point operator-() const {
        return Point(-m_x, -m_y);
    }
    Point & operator++() { // pre ++
        m_x++;
        m_y++;
        return *this;
    }
    const Point operator++(int) { // last ++
        Point p(m_x, m_y);
        m_x++;
        m_y++;
        return p;
    }
};

//Point add(Point p1, Point p2) {
//    return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
//}
//Point operator+(Point p1, Point p2) {
//    return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
//}
//Point operator+(const Point &p1, const Point &p2) {
//    return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
//}


ostream & operator<<(ostream &cout, const Point &point) {
    cout << "(" << point.m_x << ", " << point.m_y << ")";
    return cout;
}

istream & operator>>(istream &cin, Point &point) { // CARE!!! Point &point in here
    cin >> point.m_x;
    cin >> point.m_y;
    return cin;
}





class Person {
    int m_age;
    int m_height;
public:
    Person(int age = 0, int height = 0) :m_age(age), m_height(height) {}
    Person & operator=(const Person & person) {
        m_age = person.m_age;
        return *this;
    }
    void display() {
        cout << m_age << ", " << m_height << endl;
    }
};
#endif


#if 0
class Person {
public:
    int m_age;
    Person & operator=(const Person &person) {
        m_age = person.m_age;
        return *this;
    }
};
class Student: public Person {
public:
    int m_score;
    Student & operator=(const Student &student) {
        Person::operator=(student); // CARE!!! call parent class operator=(const Person &);
        m_score = student.m_score;
        return *this;
    }
    
};
#endif


#if 0
int sum_(int a, int b) {
    return a + b;
}

class Sum {
    int m_age;
public:
    int operator()(int a, int b) {
        return a + b;
    }
};
#endif



//int main(int argc, const char * argv[]) {
int basic_operator_overload() {
//    Point p1(10, 20);
//    Point p2(10, 30);
//    cin >> p1 >> p2;
//    cout << p1 << endl << p2 << endl;
    
//    cout << p1; // equivalent to operator<<(cout, p1);
//    cout << p1 << endl << p2 << endl;
//    (cout << 1) = cout; // ERROR!!!

//    Point p3(30, 40);
//    Point p = add(p1, p2);
//    p.display();
//    Point p = p1 + p2 + p3; // p1.operator+(p2).operator+(p3);
//    p1 += p2; // p1.operator+=(p2);
//    p1.display();
//    (p1 += p2) = Point(30, 40); // equivalent to p1.operator+=(p2);
//    p1.display();
    
//    cout << (p1 != p2) << endl;
    
//    Point p3 = -p1;
//    p3.display();
//    p1.display();
//    (-p1) = Point(10, 10); // ERROR!!!
//    -(-p1); // p1.operator-().operator-();
//    p1.display();
//    ++p1 = Point(1, 1);
//    p1.display();
//    Point p3 = ++p1 + Point(2, 2);
//    p1.display();
//    p3.display();
//    Point p3 = p1++ + Point(2, 2);
//    p1.display();
//    p3.display();
//    p1++ = Point(1, 1); // ERROR!!!
 
//    Point p3 = p1 + p2; // equivalent to Point p3 = operator+(p1, p2);
//    p3.display();
    
//    Point p4 = p1 + p2; // equivalent ro Point p4 = p1.operator+(p2);
//    p4.display();
//    Point p5 = p1 - p2;
//    p5.display();
    
//    int a = 10;
//    int b = 20;
//    (a + b) = 30; // ERROR!!! not allowed
//    (a += b) = 30; // allowed
//    (p1 + p2) = Point(1, 2);
    
//    (++a) = 20; // allowed
//    (a++) = 30; // ERROR!!! not allowed
    
    
//    Person p1(18, 180);
//    Person p2(16, 160);
//    p1 = p2;
//    p1.display();
//    (p1 = p2) = Person(17, 170);
//    p1.display();

    
    
//    Student stu1;
//    stu1.m_age = 10;
//    stu1.m_score = 20;
//    Student stu2;
//    stu2 = stu1;
//    cout << stu2.m_age << ", " << stu2.m_score << endl;
    
    
//    // call global function
//    cout << sum_(10, 10) << endl;
//    Sum sum;
//    // call member function
//    cout << sum(10, 20) << endl; // equivalent to sum.operator()(10, 20);
    
    
    
    
    
//    getchar();
//    getchar();
    return 0;
}
