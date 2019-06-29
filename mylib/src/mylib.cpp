//
// Created by Fan Zhenya on 2019/5/16.
//

#include "../include/mylib.hpp"
#include "mylib_impl.hpp"


class MyLibImpl2 : public MyLib {
    void SayHello() final {
        cout << "hello bitch2" << endl;
    }
};

void MyLibImpl::SayHello() {
    cout << "hello bitch" << endl;
}

