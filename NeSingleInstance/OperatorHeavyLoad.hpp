//
//  OperatorHeavyLoad.hpp
//  NeSingleInstance
//
//  Created by 天涯路 on 2019/11/21.
//  Copyright © 2019年 天涯路. All rights reserved.
//

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
