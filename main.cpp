#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "Son.h"
#include "CopyTest.h"
#include "TempTest.h"
#include <math.h>
#include <set>

using namespace std;
namespace YU {
    int age;
}

namespace LI {
    int age;
}

//这个地方会触发拷贝构造函数,所以不能更改值
void copyTests(CopyTest copyTest) {
    copyTest.m_a = 200;
}

template<typename T>
void swapValue(T &a, T &b) {
    T temp = a; //int temp=*a
    a = b;
    b = temp;//b=&temp
}

void vectorTest() {
    vector<int> a;
    a.reserve(10);
    for (int i = 0; i < 10; ++i) {
        a.push_back(i);
    }
    vector<int>::iterator iter;
    for (iter = a.begin(); iter != a.end(); ++iter) {
        *iter = pow(*iter, 2);
        cout << *iter << endl;
    }
}

int Son::test_static = 1;

template<typename T>
void test(T t) {
    cout << t << endl;
}

int addFunc(int a, int b) {
    return a + b;
}

void testFuncParam(int a, int b, int (*paramFunc)(int, int)) {
    cout << paramFunc(a, b);
}

int main() {

//    testFuncParam(1, 2, addFunc);
//    cout << Son::test_static << endl;
//    vectorTest();

//    TempTest<int, int> tempTest(100, 200);
//    tempTest.display();

//    int a = 1, b = 2;
//    swapValue(a, b);
//    cout << a << "-------" << b << endl;

//    CopyTest copyTest(1);
//    cout << copyTest.m_a << endl;
//    copyTests(copyTest);
//    cout << copyTest.m_a << endl;
//
//    //这也是通过拷贝构造函数创建对象
//    CopyTest copyTest1(copyTest);

//    Son son(0);
//    auto *son = new Son(0);
//
//    auto *father = new Father(1);
//
//    cout << father->test_v << endl;
//    father->test_a();
//
//    delete (father);
//    father = son;
//
//    father->test_a();
//
//    cout << father->test_v << endl;
//
//    delete (son);
//    Son::test(111);
    return 0;
}
