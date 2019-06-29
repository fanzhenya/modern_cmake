#include <iostream>
#include "mylib.hpp"

using namespace std;
int main() {
    auto h = MyLib::Create();
    h->SayHello();
}