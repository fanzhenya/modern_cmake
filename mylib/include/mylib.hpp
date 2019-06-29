//
// Created by Fan Zhenya on 2019/5/16.
//

#ifndef MODERN_CMAKE_MYLIB_HPP
#define MODERN_CMAKE_MYLIB_HPP

#include <memory>

class MyLib {
public:
    virtual void SayHello() = 0;
private:
    class MyLibImpl;
    std::unique_ptr<MyLibImpl> pimpl;
};


#endif //MODERN_CMAKE_MYLIB_HPP
