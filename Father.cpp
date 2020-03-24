//
// Created by yuliyang on 2020/3/23.
//

#include <iostream>
#include "Father.h"

using namespace std;

void Father::test() {
    cout << "father test" << endl;
}

Father::Father(int p) {
    cout << "father init" << endl;
}

void Father::test_a() {
    cout << "father test_a" << endl;
}
