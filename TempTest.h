//
// Created by yuliyang on 2020/3/23.
//

#ifndef LEARNCPP_TEMPTEST_H
#define LEARNCPP_TEMPTEST_H

#include <iostream>

template<class T, class K>
class TempTest {
public:

    TempTest(T t, K k);

    T m_t;
    K m_k;

    void display();
};

template<typename T, typename K>
void TempTest<T, K>::display() {
    std::cout << m_t << "========" << m_k << std::endl;
}

template<typename T, typename K>
TempTest<T, K>::TempTest(T t, K k) :m_k(k), m_t(t) {

}

#endif //LEARNCPP_TEMPTEST_H
