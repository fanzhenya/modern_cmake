//
// Created by Fan Zhenya on 2019/5/16.
//

#ifndef MODERN_CMAKE_MYLIB_IMPL_HPP
#define MODERN_CMAKE_MYLIB_IMPL_HPP

#include <iostream>
#include "mylib.hpp"
using namespace std;

class MyLibImpl : public MyLib {
public:
    void SayHello() final;
};

#endif //MODERN_CMAKE_MYLIB_IMPL_HPP
