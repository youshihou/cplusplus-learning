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
        
    public:
        Person();
        ~Person ();
        
        void setAge(int);
        int getAge();
    };
}



#endif /* Person_hpp */
