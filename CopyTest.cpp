//
// Created by yuliyang on 2020/3/23.
//

#include <iostream>
#include "CopyTest.h"

using namespace std;

CopyTest::CopyTest(const CopyTest &copyTest) {
    cout << "copy" << endl;
    this->m_a = copyTest.m_a;
}

CopyTest::CopyTest(int a) : m_a(a) {

}
