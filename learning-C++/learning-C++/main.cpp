//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>
using namespace std;

class Point {
//    friend Point add(Point, Point);
//    friend Point operator+(Point, Point);
//    friend Point operator+(const Point &, const Point &);
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


int main(int argc, const char * argv[]) {
    Point p1(10, 20);
    Point p2(20, 30);
//    Point p3(30, 40);
//    Point p = add(p1, p2);
//    p.display();
//    Point p = p1 + p2 + p3; // p1.operator+(p2).operator+(p3);
    p1 += p2; // p1.operator+=(p2);
    p1.display();
    (p1 += p2) = Point(30, 40);
    
        
//    Point p3 = p1 + p2; // equivalent to Point p3 = operator+(p1, p2);
//    p3.display();
    
//    Point p4 = p1 + p2; // equivalent ro Point p4 = p1.operator+(p2);
//    p4.display();
//    Point p5 = p1 - p2;
//    p5.display();
    
    int a = 10;
    int b = 20;
//    (a + b) = 30; // ERROR!!! not allowed
    (a += b) = 30; // allowed
//    (p1 + p2) = Point(1, 2);
    
    getchar();
    return 0;
}
