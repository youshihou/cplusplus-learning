//
//  basic-inherit.cpp
//  learning-C++
//
//  Created by Ankui on 6/14/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

#include <stdio.h>

struct Person {
    int m_age;
    
    void run() {
        
    }
};

struct Student: Person {
    int m_score;
    
    void study() {
        
    }
};

struct Worker: Person {
    int m_salary;
    
    void work() {
        
    }
};
