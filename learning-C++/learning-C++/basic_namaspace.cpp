//
//  basic_namaspace.cpp
//  learning-C++
//
//  Created by Ankui on 6/14/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>
#include "Person.hpp"
#include <iostream>
using namespace std;

void func() {
    cout << "::" << __func__ << endl;
}

namespace AK {
    void func() {
        cout << "AK::" << __func__ << endl;
    }
}



//int main(int argc, const char * argv[]) {
int basic_namaspace() {
    using namespace AK;
    
    Person p;
    p.setAge(10);
    p.getAge();
    
    AK::func();
    ::func(); // default global namespace ::
    ::AK::func();
    
    return 0;
}
