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


void func() {
    cout << __PRETTY_FUNCTION__ << endl;
}


int main(int argc, const char * argv[]) {
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
    
    int (*p)(int, int) = [] (int a, int b) -> int {
        return a + b;
    };
    int c = p(1, 2);
    cout << c << endl;
    
    
    
    
    return 0;
}
