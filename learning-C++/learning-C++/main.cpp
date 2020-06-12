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
#if 1
        func();
        func(10);
        func(10, 20);
        
        
        void(*func)(int) = test;
        func(10);
        
        func4(100, test);
        func4(120);
#endif
    }
    
    
//    getchar();
    return 0;
}

int func2(int v1, int v2) {
    return v1 + v2;
}

int func3(int v1, int v2) {
    return v1 + v2;
}
