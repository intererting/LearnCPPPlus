//
// Created by yuliyang on 2020/3/23.
//

#ifndef LEARNCPP_STUDENT_H
#define LEARNCPP_STUDENT_H

#include <string>
#include <iostream>

class Student {
public:
    explicit Student(int age);

    explicit Student(std::string name);

    int m_age;

    static double m_heigh;

    static void staticTest() {
        std::cout << "staticTest";
    }

    friend void testFriend(Student *student);

private:
    std::string m_name;
};

#endif //LEARNCPP_STUDENT_H
