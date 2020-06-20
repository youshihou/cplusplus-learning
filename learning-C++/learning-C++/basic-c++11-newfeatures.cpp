//
//  basic-c++11-newfeatures.cpp
//  learning-C++
//
//  Created by Ankui on 6/20/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;

#if 0
class person {
public:
    void run() {}
};

void func(int v) {
    cout << __PRETTY_FUNCTION__ << " - " << v << endl;
}
void func(int *v) {
    cout << __PRETTY_FUNCTION__ << " - " << v << endl;
}
#endif


#if 0
void func() {
    cout << __PRETTY_FUNCTION__ << endl;
}
#endif


#if 0
int add(int v1, int v2) {
    return v1 + v2;
}
int sub(int v1, int v2) {
    return v1 - v2;
}
int multiple(int v1, int v2) {
    return v1 * v2;
}
int divide(int v1, int v2) {
    return v1 / v2;
}
int task(int v1, int v2, int(*func)(int, int)) {
    return func(v1, v2);
}
#endif



//int main(int argc, const char * argv[]) {
int basic_cpulsplus11_newfeatures() {
//    auto a = 10; // int
//    auto str = "cplusplus"; // const char *
//    auto p = new person(); // person *
//    p->run();
//
//    decltype(a); // int
//    decltype(a) b = 20; // int b = 20
    
//    int *p = nullptr;
//    func(0);
//    func(NULL); // ERROR!!!
//    func(p);
    
//    int list[]{1, 2, 3, 4, 5};
//    int array[] = {1, 2, 3, 4, 5};
//    for (int item : array) {
//        cout << item << endl;
//    }
    
    
//    ([] {
//        cout << __PRETTY_FUNCTION__ << endl;
//    })();
    
//    void (*p)() = [] {
//        cout << "------" << endl;
//    };
//    p();
    
//    auto p = [] {
//        cout << "------" << endl;
//    };
//    p();
    
//    int (*p)(int, int) = [] (int a, int b) -> int {
//        return a + b;
//    };
//    int c = p(1, 2);
//    cout << c << endl;
    
    
//    auto p = [] (int a, int b) {
//        return a + b;
//    };
//    cout << p(1, 2) << endl;
    
    
//    cout << task(20, 10, add) << endl;
//    cout << task(20, 10, sub) << endl;
//    cout << task(20, 10, multiple) << endl;
//    cout << task(20, 10, divide) << endl;
    
//    cout << task(20, 10, [] (int v1, int v2) {
//        return v1 + v2;
//    }) << endl;
//    cout << task(20, 10, [] (int v1, int v2) {
//        return v1 - v2;
//    }) << endl;
//    cout << task(20, 10, [] (int v1, int v2) { return v1 * v2; }) << endl;
//    cout << task(20, 10, [] (int v1, int v2) { return v1 / v2; }) << endl;
    
    
    
//    int a = 10;
//    int b = 20;
//
//    // = is default value capture
//    auto func = [a, b] { // [a, b] or [=]
//        cout << a << ", " << b << endl;
//    };
//    a = 30;
//    func();
//
//    // & is reference capture
//    auto func_ = [&a, b] {
//        cout << a << ", " << b << endl;
//    };
//    a = 30;
//    func_();

    
    int a = 10;
//    auto func = [&a] {
//        a++;
//    };
//    func();
  
    auto func = [a] () mutable { // value capture
        a++;
        
        cout << a << endl;
    };
    func();
    
    cout << a << endl;
    
    
    
    
    
    return 0;
}
