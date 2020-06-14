//
//  Person.hpp
//  learning-C++
//
//  Created by Ankui on 6/14/20.
//  Copyright © 2020 Ankui. All rights reserved.
//

//#pragma once // same #ifndef ... #define ... #endif

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>

namespace AK {
    class Person {
        int m_age;
        int m_height;
        
    public:
        void setAge(int);
        int getAge();
        
        Person();
        ~Person ();
        
        Person(int age = 17, int height = 180);  // defalut parameter must be write here
    };
}



#endif /* Person_hpp */
