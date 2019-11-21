## NeSingleInstance 单例和操作符重载
### 一、单例
Student.h
```c
#ifndef Student_h
#define Student_h
class Student {
private:
    static Student* instance;
    Student();
public:
    static Student* getInstance();
    void sayHello();
};

#endif /* Student_h */
```
Student.cpp
```c
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
```
main.cpp
```c
#include <iostream>
#include "Student.h"
using namespace std;

int main(int argc, const char * argv[]) {
    Student* student = Student::getInstance();
    student->sayHello();

    return 0;
}
```
### 二、函数重载
```c
//函数重载
void func(int a) {
    
}
void func(float a) {
    
}
```
### 三、操作符重载
OperatorHeavyLoad.hpp
```c
#ifndef OperatorHeavyLoad_hpp
#define OperatorHeavyLoad_hpp

#include <stdio.h>
class OperatorHeavyLoad {
public:
    int i;
    OperatorHeavyLoad operator+(const OperatorHeavyLoad& t) {
        OperatorHeavyLoad temp;
        temp.i = this->i + t.i;
        return temp;
    }
};
#endif /* OperatorHeavyLoad_hpp */
```
main.cpp
```c
#include <iostream>
#include "OperatorHeavyLoad.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
    OperatorHeavyLoad test1;
    test1.i = 100;
    OperatorHeavyLoad test2;
    test2.i = 200;
    //操作符重载
    OperatorHeavyLoad test3 = test1+test2;
    cout << "test3.i: " << test3.i << endl;
    return 0;
}
```

