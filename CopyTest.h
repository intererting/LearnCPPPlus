//
// Created by yuliyang on 2020/3/23.
//

#ifndef LEARNCPP_COPYTEST_H
#define LEARNCPP_COPYTEST_H

class CopyTest {
public:
    explicit CopyTest(int a);

    int m_a;

    CopyTest(const CopyTest &copyTest);
};

#endif //LEARNCPP_COPYTEST_H
