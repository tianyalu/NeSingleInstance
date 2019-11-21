//
//  main.cpp
//  NeSingleInstance
//
//  Created by 天涯路 on 2019/11/21.
//  Copyright © 2019年 天涯路. All rights reserved.
//

#include <iostream>
#include "Student.h"
#include "OperatorHeavyLoad.hpp"
using namespace std;

void func(int a);
void func(float a);

int main(int argc, const char * argv[]) {
    Student* student = Student::getInstance();
    student->sayHello();
    
    OperatorHeavyLoad test1;
    test1.i = 100;
    OperatorHeavyLoad test2;
    test2.i = 200;
    //操作符重载
    OperatorHeavyLoad test3 = test1+test2;
    cout << "test3.i: " << test3.i << endl;
    return 0;
}

//函数重载
void func(int a) {
    
}
void func(float a) {
    
}


