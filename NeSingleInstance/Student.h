//
//  Student.h
//  NeSingleInstance
//
//  Created by 天涯路 on 2019/11/21.
//  Copyright © 2019年 天涯路. All rights reserved.
//

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
