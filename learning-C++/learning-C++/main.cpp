//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>
using namespace std;

/*       friend function & friend class         */

#if 0
class Point {
    friend Point add(Point, Point);
    friend class Math;
    
    int m_x;
    int m_y;
public:
    int getX() { return m_x; }
    int getY() { return m_y; }
    Point(int x, int y) :m_x(x), m_y(y) {}
    void diaplay() {
        cout << m_x << ", " << m_y << endl;
    }
};

Point add(Point p1, Point p2) {
//    return Point(p1.getX() + p2.getX(), p1.getY() + p2.getY());
    return Point(p1.m_x + p2.m_x, p1.m_y + p2.m_y);
}

class Math {
public:
    Point func(Point p1, Point p2) {
        return Point(p1.m_x - p2.m_x, p1.m_y - p2.m_y);
    }
};
#endif

#if 0
/*           inner class              */
class Person {
    int m_age;
    static int m_height;
public:
    class Car {
        int m_price;
        
        void func() {
            Person person;
            person.m_age = 10; // allowed access
            
            Person::m_height = 180;
            Person::func_();
            
            person.m_height = 170;
            person.func_();
            
            m_height = 160;
            func_();
        }
    };
    
    void func() {
//        Car car;
//        car.m_price = 100; // ERROR!!! do not allowed access
    }
    static void func_() {
        
    }
};


class Point {
    class Math {
        void func();
    };
};
void Point::Math::func() {
    
}

class Point_ {
    class Math_;
};
class Point_::Math_ {
    void func() {
        
    }
};

class Point__ {
    class Math__;
};
class Point__::Math__ {
    void func();
};
void Point__::Math__::func() {
    
}



/*           local class            */
void func() {
//    int age = 10;
    static int height = 180;
    
    class Car_ {
//        static int m_price; // ERROR!!! not allowed
    public:
//        void run();
        void run_() { // achievement must in here
//            age = 20; // not allowed access
            height = 160; // allowed access
        }
    };
    
    // ERROR!!! not allowed in here
//    void Car_::run() {
//
//    }
}
#endif


int main(int argc, const char * argv[]) {
//    Point p1(10, 20);
//    Point p2(20, 30);
//    Point p = add(p1, p2);
//    p.diaplay();
    
//    Person::Car car;
    
    
    getchar();
    return 0;
}
