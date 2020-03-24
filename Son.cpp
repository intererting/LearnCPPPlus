//
// Created by yuliyang on 2020/3/23.
//

#include <iostream>
#include "Son.h"

using namespace std;

//void Son::test() {
//    Father::test();
//    cout << "son test";
//}

void Son::test(int a) {
//    Father::test();
//    GrandFather::test();
    cout << a << endl;
}

Son::Son(int b) : GrandFather(b), Father(b) {

}

void Son::test_a() {
    cout << "son test_a  " << test_v << endl;
}