cmake_minimum_required(VERSION 3.15)
project(LearnCPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(LearnCPP main.cpp Student.h Student.cpp Father.cpp Father.h Son.cpp Son.h GrandFather.cpp GrandFather.h CopyTest.cpp CopyTest.h TempTest.cpp TempTest.h)