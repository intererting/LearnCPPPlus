//
// Created by yuliyang on 2020/3/23.
//

#ifndef LEARNCPP_FATHER_H
#define LEARNCPP_FATHER_H

class Father {
public:
    int test_v = 100;

    explicit Father(int a);

    static void test();

    virtual void test_a();

    //纯虚函数,抽象类用
//    virtual void test_b() = 0;
};

#endif //LEARNCPP_FATHER_H
