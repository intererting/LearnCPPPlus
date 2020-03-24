//
// Created by yuliyang on 2020/3/23.
//

#ifndef LEARNCPP_SON_H
#define LEARNCPP_SON_H

#include "Father.h"
#include "GrandFather.h"

class Son : public Father, public GrandFather {

public:
    int test_v = 10;

    explicit Son(int b);
    //修改父类访问权限,本来是protected
//    using Father::test;

    static void test(int a);

    static int test_static;

    void test_a() override;
};

#endif //LEARNCPP_SON_H
