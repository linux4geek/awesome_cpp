/*
* C++ 4种cast类型使用方式
*
*  1、dynamic_cast 只能够用在指向类的指针或者引用上(或者void*)。转换的目的是确保目标指针类型所指向的是一个有效且完整的对象
*  2、static_cast
*  3、reinterpret_cast
*  4、const_cast
*/

#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int CastMain(int argc, char** argv) {

    const char* data = "123456";
    char* buf = const_cast<char*> (data);
    
    return 0;
}

