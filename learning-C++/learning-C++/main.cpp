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
    friend Point add(Point, Point);
//    friend Point operator+(Point, Point);
    friend Point operator+(const Point &, const Point &);
    int m_x;
    int m_y;
public:
    Point(int x, int y) :m_x(x), m_y(y) {}
    void display() {
        cout << "(" << m_x << ", " << m_y << ")" << endl;
    }
};

Point add(Point p1, Point p2) {
    return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
}

//Point operator+(Point p1, Point p2) {
//    return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
//}

Point operator+(const Point &p1, const Point &p2) {
    return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
}


int main(int argc, const char * argv[]) {
    Point p1(10, 20);
    Point p2(20, 30);
//    Point p = add(p1, p2);
//    p.display();
        
    Point p3 = p1 + p2; // equivalent to Point p3 = operator+(p1, p2);
    p3.display();
    
    getchar();
    return 0;
}
