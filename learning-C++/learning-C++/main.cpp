//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>

using namespace std;


/*     1.function overload          */
int sum(int a, int b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

void print(int a, double b) {
    cout << __func__ << endl;
}

void print(double a, int b) {
    cout << __func__ << endl;
}


/*        2.default parameter          */
int func(int v1 = 5, int v2 = 6) {
    return v1 + v2;
}

int func2(int v1, int v2 = 10);

int g_age = 10;
int func3(int v1, int v2 = g_age);

void test(int a) {
    cout << a << endl;
}
void func4(int v1, void(*p)(int) = test) {
    p(v1);
}


/*         3.extern C             */
//#ifdef __cplusplus
//extern "C" {
//#endif
//
//
//#ifdef _cplusplus
//}
//#endif


/*          4.const              */
struct Date {
    int year;
    int month;
    int day;
};






int main(int argc, const char * argv[]) {

    {
#if 0
    cout << sum(10, 20) << endl;
    cout << sum(10, 20, 30) << endl;
    
    print(10, 20.0);
    print(10.0, 20);
#endif
    }
    
    {
#if 0
        func();
        func(10);
        func(10, 20);
        
        void(*func)(int) = test;
        func(10);
        
        func4(100, test);
        func4(120);
#endif
    }
    
    {
#if 0
//        const Date d = {2020, 06, 13};
//        Date d2 = {2020, 06, 25};
//        d.year = 2021;
//        d = d2;
        
//        Date d1 = {2020, 06, 13};
//        const Date *p = &d1;
//        p->year = 2021;
//        cout << d1.year << endl;
//        (*p).month = 07; // (*p) == d1
//        Date d2 = {2020, 06, 25};
//        *p = d2;
        
        
//        int age = 10;
//        const int *p1 = &age;
//        int const *p2 = &age;
//        int * const p3 = &age;
//        const int * const p4 = &age;
//        int const * const p5 = &age;

        int age = 10;
        int height = 20;
        
        
        const int *p1 = &age; // *p1 is const, p1 is not
//        *p1 = 30; // age = 30;
        p1 = &height;
//        *p1 = 40; // height = 40;
        
        
        int const *p2 = &age; // *p2 is const, p2 is not
//        *p2 = 30;
        p2 = &height;
//        *p2 = 40;
        
        
        int * const p3 = &age; // p3 is const, *p3 is not
        *p3 = 30; // age = 30;
//        p3 = &height;
        *p3 = 40; // height = 40;
        
        
//        const int * const p4 = &age; // p4 is const, *p4 is const
//        *p4 = 30;
//        p4 = &height;
//        *p4 = 40;
        

//        int const * const p5 = &age; // p5 is const, *p5 is const
//        *p5 = 30;
//        p5 = &height;
//        *p5 =40;
        
        
        
        struct Student {
            int age;
        };
        
        Student stu1 = {10};
        Student stu2 = {20};
        
        const Student *pStu1 = &stu1;
//        *pStu1 = stu2;
//        (*pStu1).age = 30;
//        pStu1->age = 30;
        pStu1 = &stu2;
        
        
        Student * const pStu2 = &stu2;
        *pStu2 = stu1;
        (*pStu2).age = 30;
        pStu2->age = 30;
//        pStu2 = &stu1;
        
#endif
    }
    
    
    
    
    
    
    getchar();
    return 0;
}





int func2(int v1, int v2) {
    return v1 + v2;
}

int func3(int v1, int v2) {
    return v1 + v2;
}
