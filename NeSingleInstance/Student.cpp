//
//  Student.cpp
//  NeSingleInstance
//
//  Created by 天涯路 on 2019/11/21.
//  Copyright © 2019年 天涯路. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Student.h"
using namespace std;

Student* Student::instance = 0;
Student::Student() {
    
}

Student* Student::getInstance(){
    if(!instance) {
        instance = new Student();
    }
    return instance;
}


void Student::sayHello(){
    cout << "Hello 哈哈哈" << endl;
}
