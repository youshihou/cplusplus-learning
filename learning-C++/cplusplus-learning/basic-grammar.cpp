//
//  basic-grammar.cpp
//  cplusplus-learning
//
//  Created by Ankui on 6/13/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

#if 0
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


/*         3.extern "C"             */
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


/*          5.reference          */
void swap1(int *v1, int *v2) {
    int tmp = *v1;
    *v1 = *v2;
    *v2 = tmp;
}

void swap2(int &v1, int &v2) {
    int tmp = v1;
    v1 = v2;
    v2 = tmp;
}

int sum_(int &v1, int &v2) {
    return v1 + v2;
}

int sum_(const int &v1, const int &v2) { // const parameter, reference function overload
    return v1 + v2;
}

#endif


//int main(int argc, const char * argv[]) {
int basic_grammar() {
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
    {
#if 0
//        int height = 20;
        int age = 10;
        int &ref = age;
//        ref = 20;
//        ref += 30;
//        cout << age << endl;
        
//        ref = height;
//        ref = 11;
//        cout << height << endl;
        
        int &ref1 = ref;
        int &ref2 = ref1;
        ref += 10;
        ref1 += 10;
        ref2 += 10;
//        cout << age << endl;
        
        int a = 10;
        int b = 20;
//        swap1(&a, &b);
        swap2(a, b);
//        cout << "a = " << a << ", b = " << b << endl;
        
        int weight = 10;
        int *p = &weight;
        int * &ref_ = p;
        *ref_ = 30;
        
        int number = 40;
        ref_ = &number;
        
        int array[] = {1, 2, 3};
        int (&ref__)[3] = array;
        ref__[0] = 10;
        int * const &ref2__ = array; // same
        ref2__[0] = 20;
        
        
//        int *arr1[3] = {p, p, p}; // pointer array, save 3 int *
//        int (*arr2)[3]; // array pointer, save 3 int
        
//        int &arr3[3]; // ERROR!!!, not exist
        
        
        const int *pp = &age;
//        *pp = 20;
        cout << *pp << endl;
        
        int * const p_ = &age; // p can not modify, *p can modify
//        p_ = &weight; // ERROE!!!
        *p_ = 20;
        int const *p__ = &age; // p can modify, but *p can not modify
        p__ = &weight;
//        *p__ = 30; // ERROR!!!

        
        const int &ref___ = age; // can access, but can not modify
//        ref___ = 30;
        int const &ref1___ = age; // same
        cout << ref___ << endl << ref1___ << endl;
        
        
//        int const & const ref7_ = age; // not allowed
//        ref7_ = 20;
//        int & const ref6_ = age; // not allowed, meaningless
        int &ref6__ = age;
        ref6__ = 30;
        
        
        age = 10;
//        int &ref66 = 30; // ERROR!!!
//        int &ref66_ = a + b; // ERROE!!!
//        int &ref66__ = sum(1, 2); // ERROR!!!
//        double &ref66 = age; // ERROR!!!
        int &ref66 = age; // must be a variable
        ref66 = 20;
    
//        const int &ref666 = 30; // allowed
//        const int &ref666_ = a + b; // allowed
//        const int &ref666__ = sum(1, 2); // allowed
//        const double &ref666___ = age; // allowed
        
        
        a = 10;
        b = 20;
        sum_(a, b);
        sum_(10, 20); // CARE!!!
        const int aa = 10;
        const int bb = 20;
        sum_(aa, bb);
        
        
        age = 10;
        const int &rAge = age;
        age = 20;
        cout << "age = " << age << endl;
        cout << "rAge = " << rAge << endl;
        
        age = 10;
        const double &rAge_ = age;
        age = 30;
        cout << "age = " << age << endl;
        cout << "rAge_ = " << rAge_ << endl;
        
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

