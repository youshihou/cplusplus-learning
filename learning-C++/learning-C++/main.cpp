//
//  main.cpp
//  learning-C++
//
//  Created by Ankui on 6/12/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <iostream>

using namespace std;

struct Person {
    int m_age;
    
    Person () {
        m_age = 0;
        cout << __func__ << endl;
    }
    
    ~Person () {
        cout << __func__ << endl;
    }
};


int main(int argc, const char * argv[]) {
    
    
    return 0;
}

