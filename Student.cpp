#include <iostream>
#include <utility>
#include "Student.h"

using namespace std;
double Student::m_heigh = 12;

Student::Student(int age) : m_age(age) {

}

void testFriend(Student *student) {
    std::cout << student->m_name;
}

Student::Student(std::string name) : m_name(std::move(name)) {

}
